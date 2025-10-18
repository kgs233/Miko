using System;

namespace Miko.Library.Syntax;

public abstract class TypeSyntaxNode : SyntaxChildNode
{
    protected TypeSyntaxNode(SyntaxNode parent, long startLine, long startColumn, long endLine, long endColumn) : base(parent, startLine, startColumn, endLine, endColumn)
    {
    }

    public abstract string GetTypeNameString();
}
