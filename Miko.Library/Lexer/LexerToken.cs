namespace Miko.Library.Lexer
{
    public record LexerToken(int Line, int Column, LexerTokenType Type, string Text)
    {
        public int Line { get; set; } = Line;
        public int Column { get; set; } = Column;
        public LexerTokenType Type { get; set; } = Type;
        public string Value { get; set; } = Text;
    }
}