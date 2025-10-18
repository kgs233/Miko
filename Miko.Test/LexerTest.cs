using Miko.Library.Lexer;
using Miko.Library.Source;

namespace Miko.Test
{
    // xUnit 使用 [Fact] 和 [Theory] 属性，不需要 [TestFixture] 属性
    public class LexerTests
    {
        // 辅助方法：将字符串内容转换为 Token 列表
        private List<LexerToken> RunLexer(string TextCode)
        {
            // 1. 创建 StringSource 对象。
            //    SourceName 使用 null 或默认值，因为它是内存中的代码。
            var source = new StringSource(TextCode, "TestCode");
            
            // 2. 将 Source 对象传入 Lexer.Lex。
            return Lexer.Lex(source);
        }

        // 辅助方法：验证 Token 列表的类型和源字符串
        private void AssertTokens(List<LexerToken> actualTokens, params (LexerTokenType Type, string Text)[] expected)
        {
            // 确保总数匹配 (预期 Token 数量 + 1个 EOF Token)
            Assert.Equal(expected.Length + 1, actualTokens.Count);

            for (int i = 0; i < expected.Length; i++)
            {
                var actual = actualTokens[i];
                var expectedItem = expected[i];

                Assert.True(actual.Type == expectedItem.Type,
                    $"Token {i} 类型错误。期望: {expectedItem.Type}, 实际: {actual.Type}. Text: {actual.Text}");

                Assert.True(actual.Text == expectedItem.Text,
                    $"Token {i} 源字符串错误。期望: \"{expectedItem.Text}\", 实际: \"{actual.Text}\"");
            }

            // 验证最后一个 Token 是 EOF
            Assert.Equal(LexerTokenType.EndOfFile, actualTokens.Last().Type);
        }

        // ---
        // 测试案例 (所有测试逻辑保持不变，只修改了 RunLexer 的调用)
        // ---

        [Fact]
        public void Lex_ShouldHandleKeywordsAndIdentifiers()
        {
            const string code = "if else while identifier_name lambda";
            AssertTokens(RunLexer(code),
                (LexerTokenType.IfKeyword, "if"),
                (LexerTokenType.ElseKeyword, "else"),
                (LexerTokenType.WhileKeyword, "while"),
                (LexerTokenType.Identifier, "identifier_name"),
                (LexerTokenType.LambdaKeyword, "lambda")
            );
        }

        [Fact]
        public void Lex_ShouldHandleVariousSymbols()
        {
            const string code = "() {} [] ; , . : ? + - * / % = == != < > <= >= ->";
            AssertTokens(RunLexer(code),
                (LexerTokenType.LeftParenSymbol, "("),
                (LexerTokenType.RightParenSymbol, ")"),
                (LexerTokenType.LeftBraceSymbol, "{"),
                (LexerTokenType.RightBraceSymbol, "}"),
                (LexerTokenType.LeftBracketSymbol, "["),
                (LexerTokenType.RightBracketSymbol, "]"),
                (LexerTokenType.SemicolonSymbol, ";"),
                (LexerTokenType.CommaSymbol, ","),
                (LexerTokenType.DotSymbol, "."),
                (LexerTokenType.ColonSymbol, ":"),
                (LexerTokenType.QuestionSymbol, "?"),
                (LexerTokenType.PlusSymbol, "+"),
                (LexerTokenType.MinusSymbol, "-"),
                (LexerTokenType.MultiplySymbol, "*"),
                (LexerTokenType.DivideSymbol, "/"),
                (LexerTokenType.ModuloSymbol, "%"),
                (LexerTokenType.AssignSymbol, "="),
                (LexerTokenType.EqualSymbol, "=="),
                (LexerTokenType.NotEqualSymbol, "!="),
                (LexerTokenType.LessSymbol, "<"),
                (LexerTokenType.GreaterSymbol, ">"),
                (LexerTokenType.LessEqualSymbol, "<="),
                (LexerTokenType.GreaterEqualSymbol, ">="),
                (LexerTokenType.LambdaArrowSymbol, "->")
            );
        }

        [Fact]
        public void Lex_ShouldHandleComplexOperators()
        {
            const string code = "a++ b-- ! ~ && || 1<<2 3>>=4";
            AssertTokens(RunLexer(code),
                (LexerTokenType.Identifier, "a"),
                (LexerTokenType.IncrementSymbol, "++"),
                (LexerTokenType.Identifier, "b"),
                (LexerTokenType.DecrementSymbol, "--"),
                (LexerTokenType.NotSymbol, "!"),
                (LexerTokenType.NegateSymbol, "~"),
                (LexerTokenType.LogicalAndSymbol, "&&"),
                (LexerTokenType.LogicalOrSymbol, "||"),
                (LexerTokenType.Integer, "1"),
                (LexerTokenType.LeftShiftSymbol, "<<"),
                (LexerTokenType.Integer, "2"),
                (LexerTokenType.Integer, "3"),
                (LexerTokenType.RightShiftAssignSymbol, ">>="),
                (LexerTokenType.Integer, "4")
            );
        }

        [Fact]
        public void Lex_ShouldHandleAssignmentOperators()
        {
            const string code = "+= -= *= /= %= &= |= ^= <<= >>=";
            AssertTokens(RunLexer(code),
                (LexerTokenType.PlusAssignSymbol, "+="),
                (LexerTokenType.MinusAssignSymbol, "-="),
                (LexerTokenType.MultiplyAssignSymbol, "*="),
                (LexerTokenType.DivideAssignSymbol, "/="),
                (LexerTokenType.ModuloAssignSymbol, "%="),
                (LexerTokenType.AndAssignSymbol, "&="),
                (LexerTokenType.OrAssignSymbol, "|="),
                (LexerTokenType.XorAssignSymbol, "^="),
                (LexerTokenType.LeftShiftAssignSymbol, "<<="),
                (LexerTokenType.RightShiftAssignSymbol, ">>=")
            );
        }

        // 使用 [Theory] 和 [InlineData] 进行数据驱动测试
        [Theory]
        [InlineData("123", "123", LexerTokenType.Integer)]
        [InlineData("0xDEADBEEF", "0xDEADBEEF", LexerTokenType.Integer)] // 十六进制
        [InlineData("0b10101", "0b10101", LexerTokenType.Integer)]       // 二进制
        [InlineData("0o777", "0o777", LexerTokenType.Integer)]           // 八进制 (C# 风格)
        [InlineData("3.14159", "3.14159", LexerTokenType.Float)]
        [InlineData("0.5", "0.5", LexerTokenType.Float)]
        [InlineData("10.0e-5", "10.0e-5", LexerTokenType.Float)]
        [InlineData("1E+3", "1E+3", LexerTokenType.Float)]
        public void Lex_ShouldHandleVariousNumbers(string Text, string expectedValue, LexerTokenType expectedType)
        {
            AssertTokens(RunLexer(Text),
                (expectedType, expectedValue)
            );
        }

        [Fact]
        public void Lex_ShouldHandleStringLiteralsAndEscapes()
        {
            // \n 应被转义为换行符
            const string code = "\"Hello \\n World\"";
            AssertTokens(RunLexer(code),
                (LexerTokenType.String, "Hello \n World") 
            );
            
            // 多个转义字符
            const string code2 = "\"\\t\\\"\\\\\"";
            AssertTokens(RunLexer(code2),
                (LexerTokenType.String, "\t\"\\")
            );
        }

        [Fact]
        public void Lex_ShouldHandleUnicodeEscapesInString()
        {
            // \u0041 是大写字母 'A'，\u00A9 是版权符号 '©'
            const string code = "\"\\u0041\\u00A9\"";
            AssertTokens(RunLexer(code),
                (LexerTokenType.String, "A©")
            );
        }
        
        [Fact]
        public void Lex_ShouldHandleCharLiteralsAndEscapes()
        {
            AssertTokens(RunLexer("'a'"), (LexerTokenType.Char, "a"));
            AssertTokens(RunLexer("'\\n'"), (LexerTokenType.Char, "\n"));
            AssertTokens(RunLexer("'\\u0058'"), (LexerTokenType.Char, "X")); // \u0058 是大写字母 'X'
        }

        [Fact]
        public void Lex_ShouldHandleWhitespaceAndLineNumbers()
        {
            const string code = "if\n{\n    a = 1;\n}";
            var tokens = RunLexer(code);
            
            // 验证 Token 数量
            Assert.Equal(8, tokens.Count); // 7 tokens + EOF

            // 验证行和列信息
            Assert.True(tokens[0].Text == "if" && tokens[0].Line == 1 && tokens[0].Column == 1);
            Assert.True(tokens[1].Text == "{" && tokens[1].Line == 2 && tokens[1].Column == 1);
            
            // 'a' token
            Assert.True(tokens[2].Text == "a" && tokens[2].Line == 3 && tokens[2].Column == 5); 
            
            // '=' token
            Assert.True(tokens[3].Text == "=" && tokens[3].Line == 3 && tokens[3].Column == 7); 
            
            // '}' token
            Assert.True(tokens[6].Text == "}" && tokens[6].Line == 4 && tokens[6].Column == 1); 
        }
    }
}