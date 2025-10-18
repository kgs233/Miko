using System.Numerics;

namespace Miko.Library.Syntax;

public abstract class SyntaxNode
{
    public List<SyntaxChildNode> Children { get; set; } = [];

    public long StartLine { get; init; }
    public long EndLine { get; init; }
    public long StartColumn { get; init; }
    public long EndColumn { get; init; }

    protected SyntaxNode(
        long startLine, long startColumn,
        long endLine, long endColumn)
    {
        StartLine = startLine;
        StartColumn = startColumn;
        EndLine = endLine;
        EndColumn = endColumn;
    }
}
