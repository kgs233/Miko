using System;

namespace Miko.Library.Analysis.Syntax;

public class SyntaxEndNode : SyntaxNode
{
    public SyntaxEndNode(
        long line, long column)
            : base([], line, column)
    {
    }
}
