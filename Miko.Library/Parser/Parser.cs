using Miko.Library.Lexer;
using Miko.Library.Parser.Syntax;
using Miko.Library.Parser.Syntax.Type;

namespace Miko.Library.Parser;

public static class Parser
{
    private class LexerTokenStream(IEnumerable<LexerToken> tokens)
    {
        private int position = 0;
        private readonly LexerToken[] tokenList = [.. tokens];

        public LexerToken Current => tokenList[position];

        public LexerToken Peek(int offset = 1)
        {
            if (position + offset >= tokenList.Length)
            {
                throw new Exception("Token Stream Out of Range");
            }
            return tokenList[position + offset];
        }

        public void Next() => Advance();

        public void Advance(int step = 1)
        {
            position += step;
            if (position >= tokenList.Length)
            {
                throw new Exception("Token Stream Out of Range");
            }
        }

        public bool IsEOF() => Current.Type == LexerTokenType.EndOfFile;
    }

    public static SourceSyntaxNode Parse(IEnumerable<LexerToken> tokens)
    {
        LexerTokenStream tokenStream = new(tokens);

        List<SyntaxNode> tempNode = [];
        while (!tokenStream.IsEOF())
        {
            switch (tokenStream.Current.Type)
            {
                case LexerTokenType.DefineKeyword:
                case LexerTokenType.PublicKeyword:
                case LexerTokenType.PrivateKeyword:
                case LexerTokenType.StaticKeyword:
                    tempNode.Add(ParseDefineNode(tokenStream));
                    break;

                case LexerTokenType.OpenKeyword:
                    tempNode.Add(ParseOpenNode(tokenStream));
                    break;

                default:
                    throw new Exception($"Error: There Can't have {tokenStream.Current.Type.ToString()} in {tokenStream.Current.Line}:{tokenStream.Current.Column}");
            }
        }
    }

    private static DefineSyntaxNode ParseDefineNode(LexerTokenStream tokenStream)
    {
        bool isPublic = true;
        if (tokenStream.Current.Type == LexerTokenType.PublicKeyword)
        {
            isPublic = true;
            tokenStream.Next();
        }
        else if (tokenStream.Current.Type == LexerTokenType.PrivateKeyword)
        {
            isPublic = false;
            tokenStream.Next();
        }

        bool isStatic = false;
        if (tokenStream.Current.Type == LexerTokenType.StaticKeyword)
        {
            isStatic = true;
            tokenStream.Next();
        }

        if (tokenStream.Current.Type != LexerTokenType.Identifier)
        {
            throw new Exception($"Error in {tokenStream.Current.Line}:{tokenStream.Current.Column}: Where is the identifier?");
        }

        IdentifierSyntaxNode nameNode = ParseIdentifierNode(tokenStream);

        if (tokenStream.Current.Type != LexerTokenType.ColonSymbol)
        {
            throw new Exception($"Error in {tokenStream.Current.Line}:{tokenStream.Current.Column}: Where is the ':'?");
        }
        tokenStream.Next();

        TypeSyntaxNode typeNode;
        switch (tokenStream.Current.Type)
        {
            case LexerTokenType.Identifier:
                IdentifierSyntaxNode typeIdentifier = ParseIdentifierNode(tokenStream);
                if (tokenStream.Current.Type != LexerTokenType.LeftParenSymbol)
                {
                    typeNode = new UserDefinedTypeSyntaxNode(typeIdentifier, typeIdentifier.Line, typeIdentifier.Column);
                }
                else
                {
                    // TODO: User defined Function Type
                }
                break;

            default:
                throw new Exception($"Error in {tokenStream.Current.Line}:{tokenStream.Current.Column}: We don't know ${tokenStream.Current.Value} is a type.");
        }

        if (tokenStream.Current.Type != LexerTokenType.AssignSymbol)
        {
            tokenStream.Next();
            // TODO: Default Value
        }

        return new DefineSyntaxNode(
            nameNode,
            typeNode,
            isPublic,
            isStatic,
            nameNode.Line,
            nameNode.Column);
    }

    private static IdentifierSyntaxNode ParseIdentifierNode(LexerTokenStream tokenStream)
    {
        List<string> names = [];
        long line = tokenStream.Current.Line;
        long column = tokenStream.Current.Column;

        if (tokenStream.Current.Type != LexerTokenType.Identifier)
        {
            throw new Exception($"Error in {tokenStream.Current.Line}:{tokenStream.Current.Column}: We don't know ${tokenStream.Current.Value} is a identifier.");
        }

        names.Add(tokenStream.Current.Value);
        tokenStream.Next();

        while (tokenStream.Current.Type == LexerTokenType.DotSymbol)
        {
            tokenStream.Next();
            if (tokenStream.Current.Type != LexerTokenType.Identifier)
            {
                throw new Exception($"Error in {tokenStream.Current.Line}:{tokenStream.Current.Column}: We don't know ${tokenStream.Current.Value} is a identifier.");
            }

            names.Add(tokenStream.Current.Value);
            tokenStream.Next();
        }

        return new IdentifierSyntaxNode(names, line, column);
    }
}
