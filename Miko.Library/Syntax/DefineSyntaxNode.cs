namespace Miko.Library.Syntax;

public class DefineSyntaxNode : SyntaxChildNode
{
    public string Name { get; init; }

    public DefineSyntaxNode(
        SyntaxNode parent,
        string name,
        long startLine, long startColumn,
        long endLine, long endColumn) 
            : base(parent, startLine, startColumn, endLine, endColumn)
    {
        Name = name;
    }
}
