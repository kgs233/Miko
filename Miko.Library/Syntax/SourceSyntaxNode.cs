using System;

namespace Miko.Library.Syntax;

public class SourceSyntaxNode : SyntaxNode
{
    
    public SourceSyntaxNode(
        long startLine, long startColumn,
        long endLine, long endColumn) : base(startLine, startColumn, endLine, endColumn)
    {
    }
}