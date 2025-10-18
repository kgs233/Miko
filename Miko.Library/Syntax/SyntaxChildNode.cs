using System;

namespace Miko.Library.Syntax;

public abstract class SyntaxChildNode : SyntaxNode
{
    public SyntaxNode Parent { get; set; }

    protected SyntaxChildNode(
        SyntaxNode parent,
        long startLine, long startColumn,
        long endLine, long endColumn)
            : base(startLine, startColumn, endLine, endColumn)
    {
        Parent = parent;
    }
}
