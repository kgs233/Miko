using System.Globalization;
using System.Text;

namespace Miko.Library.Lexer
{
    /// <summary>
    /// Core Lexical Analyzer: Converts a Source.Source into a sequence of LexerTokens.
    /// </summary>
    public static class Lexer
    {
        private static readonly Dictionary<string, LexerTokenType> Keywords = new()
        {
            {"define", LexerTokenType.KEYWORD_DEFINE},
            {"public", LexerTokenType.KEYWORD_PUBLIC},
            {"private", LexerTokenType.KEYWORD_PRIVATE},
            {"const", LexerTokenType.KEYWORD_CONST},
            {"type", LexerTokenType.KEYWORD_TYPE},
            {"struct", LexerTokenType.KEYWORD_STRUCT},
            {"tuple", LexerTokenType.KEYWORD_TUPLE},
            {"derive", LexerTokenType.KEYWORD_DERIVE},
            {"operator", LexerTokenType.KEYWORD_OPERATOR},
            {"left", LexerTokenType.KEYWORD_LEFT},
            {"right", LexerTokenType.KEYWORD_RIGHT},
            {"fn", LexerTokenType.KEYWORD_FN},
            {"if", LexerTokenType.KEYWORD_IF},
            {"else", LexerTokenType.KEYWORD_ELSE},
            {"loop", LexerTokenType.KEYWORD_LOOP},
            {"break", LexerTokenType.KEYWORD_BREAK},
            {"exit", LexerTokenType.KEYWORD_EXIT},
            {"next", LexerTokenType.KEYWORD_NEXT},
            {"as", LexerTokenType.KEYWORD_AS},
            {"import", LexerTokenType.KEYWORD_IMPORT},
            {"null", LexerTokenType.KEYWORD_NULL},
            {"true", LexerTokenType.KEYWORD_TRUE},
            {"false", LexerTokenType.KEYWORD_FALSE},
            {"auto", LexerTokenType.KEYWORD_AUTO},
            {"enum", LexerTokenType.KEYWORD_ENUM}
        };

        private static readonly Dictionary<string, LexerTokenType> Symbols = new()
        {
            // Length 3
            {"<<=", LexerTokenType.OP_SHL_ASSIGN},
            {">>=", LexerTokenType.OP_SHR_ASSIGN},
            // Length 2
            {"==", LexerTokenType.OP_EQ},
            {"!=", LexerTokenType.OP_NE},
            {"<=", LexerTokenType.OP_LE},
            {">=", LexerTokenType.OP_GE},
            {"&&", LexerTokenType.OP_AND},
            {"||", LexerTokenType.OP_OR},
            {"++", LexerTokenType.OP_INC},
            {"--", LexerTokenType.OP_DEC},
            {"->", LexerTokenType.OP_ARROW},
            {"+=", LexerTokenType.OP_ADD_ASSIGN},
            {"-=", LexerTokenType.OP_SUB_ASSIGN},
            {"*=", LexerTokenType.OP_MUL_ASSIGN},
            {"/=", LexerTokenType.OP_DIV_ASSIGN},
            {"%=", LexerTokenType.OP_MOD_ASSIGN},
            {"&=", LexerTokenType.OP_AND_ASSIGN},
            {"|=", LexerTokenType.OP_OR_ASSIGN},
            {"^=", LexerTokenType.OP_XOR_ASSIGN},
            {"<<", LexerTokenType.OP_SHL},
            {">>", LexerTokenType.OP_SHR},
            // Length 1
            {"+", LexerTokenType.OP_ADD},
            {"-", LexerTokenType.OP_SUB},
            {"*", LexerTokenType.OP_MUL},
            {"/", LexerTokenType.OP_DIV},
            {"%", LexerTokenType.OP_MOD},
            {"=", LexerTokenType.OP_ASSIGN},
            {"<", LexerTokenType.OP_LT},
            {">", LexerTokenType.OP_GT},
            {"&", LexerTokenType.OP_BITAND},
            {"|", LexerTokenType.OP_PIPE},
            {"^", LexerTokenType.OP_BITXOR},
            {"!", LexerTokenType.OP_NOT},
            {"~", LexerTokenType.OP_BITNOT},
            {"(", LexerTokenType.OP_LPAREN},
            {")", LexerTokenType.OP_RPAREN},
            {"{", LexerTokenType.OP_LBRACE},
            {"}", LexerTokenType.OP_RBRACE},
            {"[", LexerTokenType.OP_LBRACKET},
            {"]", LexerTokenType.OP_RBRACKET},
            {";", LexerTokenType.OP_SEMICOLON},
            {",", LexerTokenType.OP_COMMA},
            {".", LexerTokenType.OP_DOT},
            {":", LexerTokenType.OP_COLON},
            {"?", LexerTokenType.OP_QUERY},
        };
        
        // Pre-calculate all symbol prefixes for dynamic longest match optimization.
        private static readonly HashSet<string> SymbolPrefixes = new HashSet<string>();
        
        static Lexer()
        {
            foreach (var symbol in Symbols.Keys)
            {
                for (int i = 1; i < symbol.Length; i++)
                {
                    SymbolPrefixes.Add(symbol.Substring(0, i));
                }
            }
        }

        /// <summary> Skips whitespace characters. </summary>
        private static void ProcessWhitespace(Source.Source source)
        {
            while (!source.IsEOF() && char.IsWhiteSpace(source.Peek()))
            {
                source.Read();
            }
        }

        /// <summary> Determines if the pair is a numeric base prefix (e.g., 0x, 0b). </summary>
        private static bool IsBasePrefix(char first, char second)
        {
            return first == '0' && (second == 'x' || second == 'X' || second == 'b' || second == 'B' || second == 'o' || second == 'O');
        }

        /// <summary> Determines if the character is a hexadecimal digit. </summary>
        private static bool IsHexDigit(char ch)
        {
            return (ch >= '0' && ch <= '9') || (ch >= 'a' && ch <= 'f') || (ch >= 'A' && ch <= 'F');
        }

        /// <summary> Handles escape sequences within strings/chars. </summary>
        private static char HandleEscapeSequence(Source.Source source, char firstChar)
        {
            if (firstChar == 'u') // \uXXXX (4-digit Unicode)
            {
                var hexString = source.ReadN(4);
                if (hexString.Length == 4 && int.TryParse(hexString, NumberStyles.HexNumber, null, out int unicodeValue))
                {
                    if (unicodeValue >= 0 && unicodeValue <= 0xFFFF)
                    {
                        return (char)unicodeValue;
                    }
                }
                throw new Exception($"Invalid Unicode escape sequence: \\u{hexString}");
            }
            
            return firstChar switch
            {
                'n' => '\n',
                't' => '\t',
                'r' => '\r',
                '\\' => '\\',
                '"' => '"',
                '\'' => '\'',
                '0' => '\0', 
                'b' => '\b', 
                'f' => '\f', 
                _ => firstChar, 
            };
        }

        /// <summary> Identifies an identifier or a keyword. </summary>
        private static LexerToken ProcessIdentifier(Source.Source source, int startLine, int startColumn)
        {
            var sb = new StringBuilder();
            while (!source.IsEOF())
            {
                var currentCh = source.Peek();
                // Allow letters, digits, underscore, and Unicode letters
                if (char.IsLetterOrDigit(currentCh) || currentCh == '_' || char.GetUnicodeCategory(currentCh) == UnicodeCategory.OtherLetter)
                {
                    sb.Append(source.Read());
                }
                else
                {
                    break;
                }
            }
            var identifier = sb.ToString();
            
            if (Keywords.TryGetValue(identifier, out var keywordType))
            {
                return new LexerToken(startLine, startColumn, keywordType, identifier);
            }
            
            return new LexerToken(startLine, startColumn, LexerTokenType.ID, identifier); 
        }

        /// <summary> Identifies numeric literals (int, float, various bases). </summary>
        private static LexerToken ProcessNumber(Source.Source source, int startLine, int startColumn)
        {
            var sb = new StringBuilder();
            var isFloat = false;
            char ch = source.Peek();
            char nextCh = source.Peek(1);

            // 1. Check and handle base prefixes (0x, 0b, 0o)
            if (ch == '0' && IsBasePrefix(ch, nextCh))
            {
                sb.Append(source.Read()); // Consume '0'
                sb.Append(source.Read()); // Consume prefix ('x', 'b', 'o')
                
                // Consume digits based on the prefix
                if (nextCh == 'x' || nextCh == 'X') 
                {
                    while (!source.IsEOF() && IsHexDigit(source.Peek())) sb.Append(source.Read());
                }
                else if (nextCh == 'b' || nextCh == 'B') 
                {
                    while (!source.IsEOF() && (source.Peek() == '0' || source.Peek() == '1')) sb.Append(source.Read());
                }
                else // Octal 'o' / 'O'
                {
                    while (!source.IsEOF() && source.Peek() >= '0' && source.Peek() <= '7') sb.Append(source.Read());
                }

                if (sb.Length <= 2) // Contains only "0x", "0b", "0o"
                {
                    return new LexerToken(startLine, startColumn, LexerTokenType.ERROR, $"Incomplete numeric literal: {sb}");
                }
                return new LexerToken(startLine, startColumn, LexerTokenType.INT, sb.ToString());
            }

            // 2. Handle decimal and floating point numbers
            while (!source.IsEOF())
            {
                char peek = source.Peek();
                if (char.IsDigit(peek))
                {
                    sb.Append(source.Read());
                }
                else if (peek == '.' && !isFloat && char.IsDigit(source.Peek(1)))
                {
                    isFloat = true;
                    sb.Append(source.Read());
                }
                else
                {
                    break;
                }
            }
            
            // 3. Handle scientific notation
            char exponent = source.Peek();
            char nextCharAfterE = source.Peek(1);
            if ((exponent == 'e' || exponent == 'E') && (char.IsDigit(nextCharAfterE) || nextCharAfterE == '+' || nextCharAfterE == '-'))
            {
                isFloat = true;
                sb.Append(source.Read()); // Consume 'e'/'E'
                
                char sign = source.Peek();
                if (sign == '+' || sign == '-') sb.Append(source.Read()); // Consume sign
                
                // Consume exponent digits
                while (!source.IsEOF() && char.IsDigit(source.Peek())) sb.Append(source.Read());
            }

            return new LexerToken(startLine, startColumn, isFloat ? LexerTokenType.FLOAT : LexerTokenType.INT, sb.ToString());
        }

        /// <summary> Identifies a string literal and handles escapes. </summary>
        private static LexerToken ProcessString(Source.Source source, int startLine, int startColumn)
        {
            source.Read(); // Consume starting '"'
            var stringBuilder = new StringBuilder();

            try
            {
                while (!source.IsEOF() && source.Peek() != '"')
                {
                    if (source.Peek() == '\\')
                    {
                        source.Read(); // Consume '\'
                        if (source.IsEOF())
                            throw new Exception("Unexpected EOF after escape character.");
                        
                        char escapedChar = HandleEscapeSequence(source, source.Read()); 
                        stringBuilder.Append(escapedChar);
                    }
                    else
                    {
                        stringBuilder.Append(source.Read());
                    }
                }

                if (!source.IsEOF()) 
                {
                    source.Read(); // Consume closing '"'
                    return new LexerToken(startLine, startColumn, LexerTokenType.STRING, stringBuilder.ToString());
                }
                else
                {
                    throw new Exception("Unclosed string literal.");
                }
            }
            catch (Exception ex)
            {
                // Clean up the stream to the next '\'' or newline
                while (!source.IsEOF() && source.Peek() != '"' && source.Peek() != '\n') source.Read();
                if (source.Peek() == '"') source.Read();
                
                return new LexerToken(startLine, startColumn, LexerTokenType.ERROR, $"String error: {ex.Message}");
            }
        }

        /// <summary> Identifies a character literal and handles escapes. </summary>
        private static LexerToken ProcessChar(Source.Source source, int startLine, int startColumn)
        {
            source.Read(); // Consume starting '\''
            char value = '\0';

            try
            {
                if (source.IsEOF())
                    throw new Exception("Empty or unclosed character literal.");
                
                if (source.Peek() == '\\')
                {
                    source.Read(); // Consume '\'
                    if (source.IsEOF()) 
                        throw new Exception("Unexpected EOF after escape character.");
                    
                    value = HandleEscapeSequence(source, source.Read()); 
                }
                else
                {
                    value = source.Read(); 
                }

                if (source.Peek() != '\'')
                    throw new Exception("Character literal must contain exactly one character and be closed.");

                source.Read(); // Consume closing '\''
                return new LexerToken(startLine, startColumn, LexerTokenType.CHAR, value.ToString());
            }
            catch (Exception ex)
            {
                // Clean up the stream to the next '\'' or newline
                while (!source.IsEOF() && source.Peek() != '\'' && source.Peek() != '\n') source.Read();
                if (source.Peek() == '\'') source.Read();
                
                return new LexerToken(startLine, startColumn, LexerTokenType.ERROR, $"Char error: {ex.Message}");
            }
        }

        /// <summary> Identifies operators/symbols, following the longest match principle. </summary>
        private static LexerToken ProcessOperator(Source.Source source, int startLine, int startColumn)
        {
            var bestMatch = (tokenType: LexerTokenType.ERROR, value: string.Empty, length: 0);
            var currentCandidate = new StringBuilder();
            
            // Loop to find the longest matching symbol
            for (int len = 1; ; len++)
            {
                char nextChar = source.Peek(len - 1);
                if (nextChar == '\0') break; 
                
                currentCandidate.Append(nextChar);
                string currentString = currentCandidate.ToString();
                
                bool isPrefix = SymbolPrefixes.Contains(currentString);
                bool isFullSymbol = Symbols.TryGetValue(currentString, out var symbolType);

                if (isFullSymbol)
                {
                    // Found a valid symbol, record it (this is the current longest match)
                    bestMatch = (symbolType, currentString, len);
                }
                
                // If the current string is neither a prefix nor a full symbol, stop searching.
                if (!isPrefix && !isFullSymbol)
                {
                    break;
                }
                
                // Safety break for extremely long unrecognized prefixes
                if (len >= 100) break; 
            }

            if (bestMatch.length > 0)
            {
                // Consume the token from the source stream
                source.ReadN(bestMatch.length); 
                return new LexerToken(startLine, startColumn, bestMatch.tokenType, bestMatch.value);
            }
            
            // Unknown character/symbol: consume one character and report error
            char errorChar = source.Read();
            return new LexerToken(startLine, startColumn, LexerTokenType.ERROR, $"Unknown character '{errorChar}'");
        }

        /// <summary>
        /// Static entry point: Converts the abstract Source.Source into a list of LexerTokens.
        /// </summary>
        public static List<LexerToken> Lex(Source.Source source)
        {
            var tokens = new List<LexerToken>();
            
            // The Source.Source instance handles its own position tracking (Line/Column) and buffering.
            // The position properties are accessible directly on the source instance.
            using (source)
            {
                while (!source.IsEOF())
                {
                    int startLine = source.Line;
                    int startColumn = source.Column;
                    char ch = source.Peek();

                    if (char.IsWhiteSpace(ch))
                    {
                        ProcessWhitespace(source);
                        continue;
                    }
                    
                    LexerToken token;

                    if (char.IsLetter(ch) || ch == '_' || char.GetUnicodeCategory(ch) == UnicodeCategory.OtherLetter)
                    {
                        token = ProcessIdentifier(source, startLine, startColumn);
                    }
                    else if (char.IsDigit(ch))
                    {
                        token = ProcessNumber(source, startLine, startColumn);
                    }
                    else if (ch == '"')
                    {
                        token = ProcessString(source, startLine, startColumn);
                    }
                    else if (ch == '\'')
                    {
                        token = ProcessChar(source, startLine, startColumn);
                    }
                    else
                    {
                        token = ProcessOperator(source, startLine, startColumn);
                    }
                    
                    tokens.Add(token);
                    
                    // Stop lexing immediately upon encountering an error token.
                    if (token.Type == LexerTokenType.ERROR)
                    {
                        break; 
                    }
                }
            }

            // Add EOF token
            var lastToken = tokens.Count > 0 ? tokens[^1] : null;
            int eofLine = lastToken?.Line ?? 1;
            int eofColumn = lastToken?.Column + 1 ?? 1;
            tokens.Add(new LexerToken(eofLine, eofColumn, LexerTokenType.EOF, string.Empty));
            
            return tokens;
        }
    }
}