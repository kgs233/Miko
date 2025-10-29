using System.Text;

namespace Miko.Library.Lexer
{
    using Source = Source.Source;

    public static class Lexer
    {
        // Keyword dictionary (based on the provided version)
        private static readonly Dictionary<string, LexerTokenType> Keywords = new()
        {
            {"if", LexerTokenType.IfKeyword},
            {"else", LexerTokenType.ElseKeyword},
            {"match", LexerTokenType.MatchKeyword},
            {"while", LexerTokenType.WhileKeyword},
            {"foreach", LexerTokenType.ForeachKeyword},
            {"struct", LexerTokenType.StructKeyword},
            {"derived", LexerTokenType.DerivedKeyword},
            {"enum", LexerTokenType.EnumKeyword},
            {"get", LexerTokenType.GetKeyword},
            {"set", LexerTokenType.SetKeyword},
            {"value", LexerTokenType.ValueKeyword},
            {"field", LexerTokenType.FieldKeyword},
            {"lambda", LexerTokenType.LambdaKeyword},
            {"this", LexerTokenType.ThisKeyword},
            {"asm", LexerTokenType.AsmKeyword},
            {"define", LexerTokenType.DefineKeyword},
            {"return", LexerTokenType.ReturnKeyword },
            {"stop", LexerTokenType.StopKeyword},
            {"next", LexerTokenType.NextKeyword},
            {"null", LexerTokenType.NullKeyword},
            {"static", LexerTokenType.StaticKeyword},
            {"break", LexerTokenType.BreakKeyword},
            {"public", LexerTokenType.PublicKeyword},
            {"private", LexerTokenType.PrivateKeyword},
            {"open", LexerTokenType.OpenKeyword},
        };

        // Symbol map (based on the provided version)
        private static readonly Dictionary<string, LexerTokenType> Symbols = new()
        {
            // Length 2
            {"==", LexerTokenType.EqualSymbol},
            {"!=", LexerTokenType.NotEqualSymbol},
            {"<=", LexerTokenType.LessEqualSymbol},
            {">=", LexerTokenType.GreaterEqualSymbol},
            {"&&", LexerTokenType.LogicalAndSymbol},
            {"||", LexerTokenType.LogicalOrSymbol},
            {"++", LexerTokenType.IncrementSymbol},
            {"--", LexerTokenType.DecrementSymbol},
            {"->", LexerTokenType.LambdaArrowSymbol},
            {"+=", LexerTokenType.PlusAssignSymbol},
            {"-=", LexerTokenType.MinusAssignSymbol},
            {"*=", LexerTokenType.MultiplyAssignSymbol},
            {"/=", LexerTokenType.DivideAssignSymbol},
            {"%=", LexerTokenType.ModuloAssignSymbol},
            {"&=", LexerTokenType.AndAssignSymbol},
            {"|=", LexerTokenType.OrAssignSymbol},
            {"^=", LexerTokenType.XorAssignSymbol},
            {"<<", LexerTokenType.LeftShiftSymbol},
            {">>", LexerTokenType.RightShiftSymbol},
            {"<<=", LexerTokenType.LeftShiftAssignSymbol},
            {">>=", LexerTokenType.RightShiftAssignSymbol},

            // Length 1
            {"+", LexerTokenType.PlusSymbol},
            {"-", LexerTokenType.MinusSymbol},
            {"*", LexerTokenType.MultiplySymbol},
            {"/", LexerTokenType.DivideSymbol},
            {"%", LexerTokenType.ModuloSymbol},
            {"=", LexerTokenType.AssignSymbol},
            {"<", LexerTokenType.LessSymbol},
            {">", LexerTokenType.GreaterSymbol},
            {"&", LexerTokenType.BitAndSymbol},
            {"|", LexerTokenType.BitOrSymbol},
            {"^", LexerTokenType.BitXorSymbol},
            {"!", LexerTokenType.NotSymbol},
            {"~", LexerTokenType.NegateSymbol},
            {"(", LexerTokenType.LeftParenSymbol},
            {")", LexerTokenType.RightParenSymbol},
            {"{", LexerTokenType.LeftBraceSymbol},
            {"}", LexerTokenType.RightBraceSymbol},
            {"[", LexerTokenType.LeftBracketSymbol},
            {"]", LexerTokenType.RightBracketSymbol},
            {";", LexerTokenType.SemicolonSymbol},
            {",", LexerTokenType.CommaSymbol},
            {".", LexerTokenType.DotSymbol},
            {":", LexerTokenType.ColonSymbol},
            {"?", LexerTokenType.QuestionSymbol},
        };
        
        // Maximum symbol length for longest match principle
        private const int MaxSymbolLength = 3;

        // ----------------------------------------------------
        // CharStream (重构: 使用 Source 抽象类进行索引访问)
        // ----------------------------------------------------
        private class CharStream
        {
            // 使用抽象的 Source 对象，而不是 TextReader
            private readonly Source _source;
            // 使用 long 来处理大文件的索引
            private long _position;
            private char _current;

            public int Line { get; private set; }
            public int Column { get; private set; }

            // 构造函数现在接受 Source 对象
            public CharStream(Source source)
            {
                _source = source;
                _position = -1; // 准备读取第一个字符 (索引 0)
                Line = 1;
                Column = 0;
                ReadNext(); // 加载第一个字符
            }

            public char Peek() => _current;

            // Peek 采用索引访问，更高效，无需 Lookahead Buffer
            public char Peek(int n)
            {
                if (n == 0) return _current;

                long lookaheadIndex = _position + n;

                if (lookaheadIndex >= 0 && lookaheadIndex < _source.Length)
                {
                    return _source.GetChar(lookaheadIndex);
                }
                // 返回 EOF 标记
                return '\0';
            }

            // EOF 检查更简单，只需要检查 _current 是否为 EOF 标记
            public bool IsEndOfStream() => _current == '\0';

            // Consume the current character and advance
            public char Consume()
            {
                if (IsEndOfStream())
                {
                    throw new EndOfStreamException("Attempted to consume past the end of the stream.");
                }

                char ch = _current;
                ReadNext();

                return ch;
            }

            // Safely read and consume n characters
            public string ReadNChars(int n)
            {
                var sb = new StringBuilder();
                for (int i = 0; i < n; i++)
                {
                    if (IsEndOfStream()) break;
                    sb.Append(Consume());
                }
                return sb.ToString();
            }

            // ReadNext 使用 Source.GetChar(_position)
            private void ReadNext()
            {
                _position++;

                if (_position < _source.Length)
                {
                    // 从抽象 Source 获取字符
                    _current = _source.GetChar(_position);

                    if (_current == '\n')
                    {
                        Line++;
                        Column = 0; // 列重置为 0 (下一个字符将是 1)
                    }
                    else if (_current != '\0')
                    {
                        Column++;
                    }
                }
                else
                {
                    _current = '\0'; // 设置 EOF 标记
                }
            }
        }
        
        // Helper: Handles escaped characters (including Unicode escapes)
        private static char GetEscapedChar(CharStream stream, char firstChar)
        {
            if (firstChar == 'u') // \uXXXX (4-digit Unicode)
            {
                var hexString = stream.ReadNChars(4);
                if (hexString.Length == 4 && int.TryParse(hexString, System.Globalization.NumberStyles.HexNumber, null, out int unicodeValue))
                {
                    return (char)unicodeValue;
                }
                throw new Exception($"Invalid Unicode escape sequence: \\u{hexString}");
            }
            else if (firstChar == 'U') // \UXXXXXXXX (8-digit Unicode)
            {
                var hexString = stream.ReadNChars(8);
                if (hexString.Length == 8 && int.TryParse(hexString, System.Globalization.NumberStyles.HexNumber, null, out int unicodeValue))
                {
                    // In a production environment, this would require complex UTF-16 surrogate pair handling.
                    return (char)unicodeValue; 
                }
                throw new Exception($"Invalid Unicode escape sequence: \\U{hexString}");
            }
            
            // Standard escapes
            return firstChar switch
            {
                'n' => '\n',
                't' => '\t',
                'r' => '\r',
                '\\' => '\\',
                '"' => '"',
                '\'' => '\'',
                '0' => '\0', 
                _ => firstChar, 
            };
        }

        // Helper: Checks if a character is a hexadecimal digit
        private static bool IsHexDigit(char ch)
        {
            return (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F');
        }

        // Helper: Gets the candidate string for symbol matching (uses new Peek(int n))
        private static string GetSymbolCandidate(CharStream stream, int length)
        {
            var sb = new StringBuilder();
            for (int i = 0; i < length; i++)
            {
                var candidateChar = stream.Peek(i);
                if (candidateChar == '\0') break; 
                sb.Append(candidateChar);
            }
            return sb.ToString();
        }

        public static List<LexerToken> Lex(Source source)
        {
            // 使用 using 块确保 Source 对象（如 FileSource/MMF）被正确 Dispose
            using (source)
            {
                var tokens = new List<LexerToken>();
                var stream = new CharStream(source);

                while (!stream.IsEndOfStream())
                {
                    var ch = stream.Peek();
                    var startLine = stream.Line;
                    var startColumn = stream.Column;

                    // 1. Skip whitespace
                    if (char.IsWhiteSpace(ch))
                    {
                        stream.Consume();
                        continue;
                    }
                    
                    // 2. Identifiers and Keywords
                    if (char.IsLetter(ch) || ch == '_')
                    {
                        var sb = new StringBuilder();
                        while (!stream.IsEndOfStream() && (char.IsLetterOrDigit(stream.Peek()) || stream.Peek() == '_'))
                        {
                            sb.Append(stream.Consume());
                        }
                        var identifier = sb.ToString();
                        
                        if (Keywords.TryGetValue(identifier, out var keywordType))
                        {
                            tokens.Add(new LexerToken(startLine, startColumn, keywordType, identifier));
                        }
                        else
                        {
                            tokens.Add(new LexerToken(startLine, startColumn, LexerTokenType.Identifier, identifier));
                        }
                        continue;
                    }

                    // 3. Numbers (Multi-base and Floating point)
                    if (char.IsDigit(ch))
                    {
                        var sb = new StringBuilder();
                        var isFloat = false;
                        
                        // Check for base prefixes (0x/0X, 0b/0B, 0o/0O)
                        if (ch == '0' && !stream.IsEndOfStream())
                        {
                            char nextCh = stream.Peek(1);
                            
                            // Hexadecimal: 0x... or 0X...
                            if (nextCh == 'x' || nextCh == 'X') 
                            {
                                sb.Append(stream.Consume()); // Consume '0'
                                sb.Append(stream.Consume()); // Consume 'x'/'X'
                                
                                while (!stream.IsEndOfStream() && IsHexDigit(stream.Peek()))
                                {
                                    sb.Append(stream.Consume());
                                }
                                tokens.Add(new LexerToken(startLine, startColumn, LexerTokenType.Integer, sb.ToString()));
                                continue;
                            }
                            // Binary: 0b... or 0B...
                            else if (nextCh == 'b' || nextCh == 'B') 
                            {
                                sb.Append(stream.Consume()); // Consume '0'
                                sb.Append(stream.Consume()); // Consume 'b'/'B'
                                
                                while (!stream.IsEndOfStream() && (stream.Peek() == '0' || stream.Peek() == '1'))
                                {
                                    sb.Append(stream.Consume());
                                }
                                tokens.Add(new LexerToken(startLine, startColumn, LexerTokenType.Integer, sb.ToString()));
                                continue;
                            }
                            // Octal: 0o... or 0O... (C# style)
                            else if (nextCh == 'o' || nextCh == 'O') 
                            {
                                sb.Append(stream.Consume()); // Consume '0'
                                sb.Append(stream.Consume()); // Consume 'o'/'O'
                                
                                while (!stream.IsEndOfStream() && stream.Peek() >= '0' && stream.Peek() <= '7')
                                {
                                    sb.Append(stream.Consume());
                                }
                                tokens.Add(new LexerToken(startLine, startColumn, LexerTokenType.Integer, sb.ToString()));
                                continue;
                            }
                        }
                        
                        // Decimal or floating point
                        while (!stream.IsEndOfStream() && (char.IsDigit(stream.Peek()) || stream.Peek() == '.'))
                        {
                            if (stream.Peek() == '.')
                            {
                                if (isFloat) break; 
                                isFloat = true;
                            }
                            sb.Append(stream.Consume());
                        }
                        
                        // Check for scientific notation (E/e)
                        if (stream.Peek() == 'e' || stream.Peek() == 'E')
                        {
                            isFloat = true;
                            sb.Append(stream.Consume()); 
                            
                            if (stream.Peek() == '+' || stream.Peek() == '-')
                            {
                                sb.Append(stream.Consume());
                            }
                            
                            while (!stream.IsEndOfStream() && char.IsDigit(stream.Peek()))
                            {
                                sb.Append(stream.Consume());
                            }
                        }

                        var number = sb.ToString();
                        tokens.Add(new LexerToken(startLine, startColumn, isFloat ? LexerTokenType.Float : LexerTokenType.Integer, number));
                        continue;
                    }

                    // 4. String literal (double quotes)
                    if (ch == '"')
                    {
                        stream.Consume(); 
                        var stringBuilder = new StringBuilder();

                        while (!stream.IsEndOfStream() && stream.Peek() != '"')
                        {
                            if (stream.Peek() == '\\')
                            {
                                stream.Consume(); 
                                if (!stream.IsEndOfStream())
                                {
                                    char escapedChar = GetEscapedChar(stream, stream.Consume()); 
                                    stringBuilder.Append(escapedChar);
                                }
                            }
                            else
                            {
                                stringBuilder.Append(stream.Consume());
                            }
                        }

                        if (!stream.IsEndOfStream()) 
                        {
                            stream.Consume(); 
                            tokens.Add(new LexerToken(startLine, startColumn, LexerTokenType.String, stringBuilder.ToString()));
                        }
                        else
                        {
                            throw new Exception($"Unclosed string literal starting at Line {startLine}, Column {startColumn}");
                        }
                        continue;
                    }

                    // 5. Character literal (single quotes)
                    if (ch == '\'')
                    {
                        stream.Consume(); 
                        char value;

                        if (stream.Peek() == '\\')
                        {
                            stream.Consume(); 
                            value = GetEscapedChar(stream, stream.Consume()); 
                        }
                        else
                        {
                            value = stream.Consume(); 
                        }

                        if (!stream.IsEndOfStream() && stream.Peek() == '\'') 
                        {
                            stream.Consume(); 
                            tokens.Add(new LexerToken(startLine, startColumn, LexerTokenType.Char, value.ToString()));
                        }
                        else
                        {
                            throw new Exception($"Invalid or unclosed character literal starting at Line {startLine}, Column {startColumn}");
                        }
                        continue;
                    }

                    // 6. Symbols (Longest match principle)
                    var symbolFound = false;
                    for (var len = MaxSymbolLength; len >= 1; len--)
                    {
                        var candidateString = GetSymbolCandidate(stream, len);
                        if (Symbols.TryGetValue(candidateString, out var symbolType))
                        {
                            stream.ReadNChars(candidateString.Length); 
                            tokens.Add(new LexerToken(startLine, startColumn, symbolType, candidateString));
                            symbolFound = true;
                            break;
                        }
                    }

                    if (symbolFound)
                    {
                        continue;
                    }

                    // 7. Unknown character handling
                    var unknownChar = stream.Consume();
                    throw new Exception($"Unknown character '{unknownChar}' at Line {startLine}, Column {startColumn}");
                }
                
                // Add EOF token
                tokens.Add(new LexerToken(stream.Line, stream.Column, LexerTokenType.EndOfFile, string.Empty));

                return tokens;
            }
        }
    }
}