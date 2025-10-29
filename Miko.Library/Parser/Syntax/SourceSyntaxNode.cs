using System;

namespace Miko.Library.Parser.Syntax;

public class SourceSyntaxNode : SyntaxNode
{
    public DefineSyntaxNode[] DefineList;
    
    public SourceSyntaxNode(
        SyntaxNode[] childrens,
        long line, long column)
            : base(childrens, line, column)
    {
        List<DefineSyntaxNode> defineList = [];
        foreach (var child in ChildList)
        {
            if (child is DefineSyntaxNode define)
            {
                defineList.Add(define);
            }
        }
        DefineList = [.. defineList];
    }
}