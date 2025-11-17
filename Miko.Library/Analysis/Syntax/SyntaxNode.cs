using System.Numerics;

namespace Miko.Library.Analysis.Syntax;

public abstract class SyntaxNode
{
    public SyntaxNode? Parent { get; protected set; }
    public SyntaxNode[] ChildList { get; set; } = [];

    public long Line { get; init; }
    public long Column { get; init; }

    protected SyntaxNode(
        SyntaxNode[] childrens,
        long line, long column)
    {
        ChildList = childrens;
        Line = line;
        Column = column;
        foreach (var child in ChildList)
        {
            child.Parent = this;
        }
    }
}
