using System;

namespace Miko.Library.Parser.Syntax;

public class SyntaxEndNode : SyntaxNode
{
    public SyntaxEndNode(
        long line, long column)
            : base([], line, column)
    {
    }
}
