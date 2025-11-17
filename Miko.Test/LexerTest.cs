using System.Collections.Generic;
using System.Linq;
using Xunit; 
using Miko.Library.Lexer;
using Miko.Library.Source; // Assuming StringSource is defined here

namespace Miko.Test
{
    /// <summary>
    /// Lexer tests using xUnit framework to verify tokenization logic.
    /// </summary>
    public class LexerTests
    {
        // ====================================================
        // Private Helper Methods
        // ====================================================

        /// <summary>
        /// Helper to run the lexer on a string and return the token list.
        /// </summary>
        private List<LexerToken> RunLexer(string textCode)
        {
            // 1. Create a StringSource object.
            // Assuming StringSource constructor: StringSource(string content, string name)
            var source = new StringSource(textCode, "TestCode");
            
            // 2. Pass the Source object to Lexer.Lex.
            return Lexer.Lex(source);
        }

        /// <summary>
        /// Helper to assert the actual token list matches the expected types and values.
        /// </summary>
        private void AssertTokens(List<LexerToken> actualTokens, params (LexerTokenType Type, string Text)[] expected)
        {
            // Ensure total count matches (Expected Tokens + 1 EOF Token)
            Assert.Equal(expected.Length + 1, actualTokens.Count);

            for (int i = 0; i < expected.Length; i++)
            {
                var actual = actualTokens[i];
                var expectedItem = expected[i];

                Assert.True(actual.Type == expectedItem.Type,
                    $"Token {i} Type Mismatch. Expected: {expectedItem.Type}, Actual: {actual.Type}. Text: \"{actual.Value}\"");

                Assert.True(actual.Value == expectedItem.Text,
                    $"Token {i} Value Mismatch. Expected: \"{expectedItem.Text}\", Actual: \"{actual.Value}\"");
            }

            // Verify the last token is EOF
            Assert.Equal(LexerTokenType.EOF, actualTokens.Last().Type);
        }

        // ====================================================
        // Primary Test Cases
        // ====================================================

        [Fact]
        public void Lex_ShouldHandleKeywordsAndIdentifiers()
        {
            const string code = "if else define identifier_name loop fn";
            AssertTokens(RunLexer(code),
                (LexerTokenType.KEYWORD_IF, "if"),
                (LexerTokenType.KEYWORD_ELSE, "else"),
                (LexerTokenType.KEYWORD_DEFINE, "define"),
                (LexerTokenType.ID, "identifier_name"),
                (LexerTokenType.KEYWORD_LOOP, "loop"),
                (LexerTokenType.KEYWORD_FN, "fn")
            );
        }

        [Fact]
        public void Lex_ShouldHandleVariousSymbols()
        {
            const string code = "() {} [] ; , . : ? + - * / % = == != < > <= >= ->";
            AssertTokens(RunLexer(code),
                (LexerTokenType.OP_LPAREN, "("),
                (LexerTokenType.OP_RPAREN, ")"),
                (LexerTokenType.OP_LBRACE, "{"),
                (LexerTokenType.OP_RBRACE, "}"),
                (LexerTokenType.OP_LBRACKET, "["),
                (LexerTokenType.OP_RBRACKET, "]"),
                (LexerTokenType.OP_SEMICOLON, ";"),
                (LexerTokenType.OP_COMMA, ","),
                (LexerTokenType.OP_DOT, "."),
                (LexerTokenType.OP_COLON, ":"),
                (LexerTokenType.OP_QUERY, "?"),
                (LexerTokenType.OP_ADD, "+"),
                (LexerTokenType.OP_SUB, "-"),
                (LexerTokenType.OP_MUL, "*"),
                (LexerTokenType.OP_DIV, "/"),
                (LexerTokenType.OP_MOD, "%"),
                (LexerTokenType.OP_ASSIGN, "="),
                (LexerTokenType.OP_EQ, "=="),
                (LexerTokenType.OP_NE, "!="),
                (LexerTokenType.OP_LT, "<"),
                (LexerTokenType.OP_GT, ">"),
                (LexerTokenType.OP_LE, "<="),
                (LexerTokenType.OP_GE, ">="),
                (LexerTokenType.OP_ARROW, "->")
            );
        }

        [Fact]
        public void Lex_ShouldHandleComplexOperators()
        {
            const string code = "a++ b-- ! ~ && || 1<<2 3>>=4";
            AssertTokens(RunLexer(code),
                (LexerTokenType.ID, "a"),
                (LexerTokenType.OP_INC, "++"),
                (LexerTokenType.ID, "b"),
                (LexerTokenType.OP_DEC, "--"),
                (LexerTokenType.OP_NOT, "!"),
                (LexerTokenType.OP_BITNOT, "~"),
                (LexerTokenType.OP_AND, "&&"),
                (LexerTokenType.OP_OR, "||"),
                (LexerTokenType.INT, "1"),
                (LexerTokenType.OP_SHL, "<<"),
                (LexerTokenType.INT, "2"),
                (LexerTokenType.INT, "3"),
                (LexerTokenType.OP_SHR_ASSIGN, ">>="),
                (LexerTokenType.INT, "4")
            );
        }

        [Fact]
        public void Lex_ShouldHandleAssignmentOperators()
        {
            const string code = "+= -= *= /= %= &= |= ^= <<= >>=";
            AssertTokens(RunLexer(code),
                (LexerTokenType.OP_ADD_ASSIGN, "+="),
                (LexerTokenType.OP_SUB_ASSIGN, "-="),
                (LexerTokenType.OP_MUL_ASSIGN, "*="),
                (LexerTokenType.OP_DIV_ASSIGN, "/="),
                (LexerTokenType.OP_MOD_ASSIGN, "%="),
                (LexerTokenType.OP_AND_ASSIGN, "&="),
                (LexerTokenType.OP_OR_ASSIGN, "|="),
                (LexerTokenType.OP_XOR_ASSIGN, "^="),
                (LexerTokenType.OP_SHL_ASSIGN, "<<="),
                (LexerTokenType.OP_SHR_ASSIGN, ">>=")
            );
        }

        [Theory]
        [InlineData("123", "123", LexerTokenType.INT)]
        [InlineData("0xDEADBEEF", "0xDEADBEEF", LexerTokenType.INT)] // Hexadecimal
        [InlineData("0b10101", "0b10101", LexerTokenType.INT)]      // Binary
        [InlineData("0o777", "0o777", LexerTokenType.INT)]          // Octal
        [InlineData("3.14159", "3.14159", LexerTokenType.FLOAT)]
        [InlineData("0.5", "0.5", LexerTokenType.FLOAT)]
        [InlineData("10.0e-5", "10.0e-5", LexerTokenType.FLOAT)]
        [InlineData("1E+3", "1E+3", LexerTokenType.FLOAT)]
        public void Lex_ShouldHandleVariousNumbers(string text, string expectedValue, LexerTokenType expectedType)
        {
            AssertTokens(RunLexer(text),
                (expectedType, expectedValue)
            );
        }

        [Fact]
        public void Lex_ShouldHandleStringLiteralsAndEscapes()
        {
            // \n should be escaped to a newline character
            const string code = "\"Hello \\n World\"";
            AssertTokens(RunLexer(code),
                (LexerTokenType.STRING, "Hello \n World") 
            );
            
            // Multiple escape sequences
            const string code2 = "\"\\t\\\"\\\\\"";
            AssertTokens(RunLexer(code2),
                (LexerTokenType.STRING, "\t\"\\")
            );
        }

        [Fact]
        public void Lex_ShouldHandleUnicodeEscapesInString()
        {
            // \u0041 is 'A', \u00A9 is '©'
            const string code = "\"\\u0041\\u00A9\"";
            AssertTokens(RunLexer(code),
                (LexerTokenType.STRING, "A©")
            );
        }
        
        [Fact]
        public void Lex_ShouldHandleCharLiteralsAndEscapes()
        {
            AssertTokens(RunLexer("'a'"), (LexerTokenType.CHAR, "a"));
            AssertTokens(RunLexer("'\\n'"), (LexerTokenType.CHAR, "\n"));
            // \u0058 is 'X'
            AssertTokens(RunLexer("'\\u0058'"), (LexerTokenType.CHAR, "X")); 
        }

        [Fact]
        public void Lex_ShouldHandleWhitespaceAndLineNumbers()
        {
            const string code = "if\n{\n    a = 1;\n}";
            var tokens = RunLexer(code);
            
            // Validate token count
            Assert.Equal(8, tokens.Count); // 7 tokens + EOF

            // Validate line and column information
            Assert.True(tokens[0].Value == "if" && tokens[0].Line == 1 && tokens[0].Column == 1, "Token 'if' location mismatch.");
            Assert.True(tokens[1].Value == "{" && tokens[1].Line == 2 && tokens[1].Column == 1, "Token '{' location mismatch.");
            
            // 'a' token is on line 3, column 5 (after 4 spaces)
            Assert.True(tokens[2].Value == "a" && tokens[2].Line == 3 && tokens[2].Column == 5, "Token 'a' location mismatch."); 
            
            // '=' token
            Assert.True(tokens[3].Value == "=" && tokens[3].Line == 3 && tokens[3].Column == 7, "Token '=' location mismatch."); 
            
            // '}' token
            Assert.True(tokens[6].Value == "}" && tokens[6].Line == 4 && tokens[6].Column == 1, "Token '}' location mismatch.");
        }
        
        // ====================================================
        // New Test Cases for Comprehensive Coverage
        // ====================================================

        [Fact]
        public void Lex_ShouldHandleLongestMatchPrinciple()
        {
            // Test case: '<' vs '<=', '>' vs '>=', '>>' vs '>>='
            const string code = "< == > = >> >>=";
            // The Lexer must correctly identify the longest possible symbol token first.
            AssertTokens(RunLexer(code),
                (LexerTokenType.OP_LT, "<"),
                (LexerTokenType.OP_EQ, "=="),
                (LexerTokenType.OP_GT, ">"),
                (LexerTokenType.OP_ASSIGN, "="),
                (LexerTokenType.OP_SHR, ">>"),
                (LexerTokenType.OP_SHR_ASSIGN, ">>=")
            );
        }

        [Fact]
        public void Lex_ShouldHandleLongestMatchAmbiguity()
        {
            // Test case 1: '<<=' followed by '<'
            const string code = "<<=<";
            // Must parse as "<<=" and then "<"
            AssertTokens(RunLexer(code),
                (LexerTokenType.OP_SHL_ASSIGN, "<<="),
                (LexerTokenType.OP_LT, "<")
            );
            
            // Test case 2: Ambiguous prefix (e.g., '::'). Since "::" is not defined, it tokenizes as ":" then ":".
            const string code2 = "::"; 
            var tokens = RunLexer(code2);
            AssertTokens(tokens,
                (LexerTokenType.OP_COLON, ":"),
                (LexerTokenType.OP_COLON, ":")
            );
        }
        
        [Fact]
        public void Lex_ShouldHandleComplexFloatAndIdentifierSeparation()
        {
            // Test case 1: Float followed by ID (must be two tokens)
            const string code = "1.0e-5identifier";
            AssertTokens(RunLexer(code),
                (LexerTokenType.FLOAT, "1.0e-5"),
                (LexerTokenType.ID, "identifier")
            );
            
            // Test case 2: Integer followed by dot, followed by ID (e.g., struct access), not a float
            const string code2 = "1.field";
            AssertTokens(RunLexer(code2),
                (LexerTokenType.INT, "1"),
                (LexerTokenType.OP_DOT, "."),
                (LexerTokenType.ID, "field")
            );
        }

        [Fact]
        public void Lex_ShouldHandleErrorTokens_UnclosedString()
        {
            // Unclosed string literal should generate an ERROR token
            const string code = "\"Unclosed string\\n";
            var tokens = RunLexer(code);
            
            Assert.Equal(2, tokens.Count); // ERROR + EOF
            Assert.Equal(LexerTokenType.ERROR, tokens[0].Type);
            Assert.Contains("Unclosed string literal", tokens[0].Value, System.StringComparison.OrdinalIgnoreCase); 
        }

        [Fact]
        public void Lex_ShouldHandleErrorTokens_InvalidCharLiteral()
        {
            // Char literal must contain exactly one character
            const string code = "'ab'";
            var tokens = RunLexer(code);
            
            Assert.Equal(2, tokens.Count); // ERROR + EOF
            Assert.Equal(LexerTokenType.ERROR, tokens[0].Type);
            Assert.Contains("must contain exactly one character", tokens[0].Value, System.StringComparison.OrdinalIgnoreCase);
        }
        
        [Fact]
        public void Lex_ShouldHandleErrorTokens_UnknownCharacter()
        {
            // Character outside of known symbols, identifiers, or literals (e.g., '$')
            const string code = "a$b";
            var tokens = RunLexer(code);
            
            // Tokens should be: ID 'a', ERROR '$', EOF (Lexer stops on first ERROR)
            Assert.Equal(3, tokens.Count); 
            Assert.Equal(LexerTokenType.ID, tokens[0].Type);
            Assert.Equal(LexerTokenType.ERROR, tokens[1].Type);
            Assert.Contains("Unknown character '$'", tokens[1].Value, System.StringComparison.OrdinalIgnoreCase);
        }
    }
}