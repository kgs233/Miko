namespace Miko.Lib.Structure
{
    public class Token
    {
        public Token(TokenType type, string Value, int Line, int Column)
        {
            this.Type = type;
            this.Value = Value;
            this.Line = Line;
            this.Column = Column;
        }

        public TokenType Type;
        public string Value;
        public int Line;
        public int Column;
    }
}