using System.Text;

namespace Miko.Library.Parser.Syntax.Type;

public class StructTypeSyntaxNode : TypeSyntaxNode
{
    public DefineSyntaxNode[] DefineList;

    public StructTypeSyntaxNode(
        SyntaxNode parent,
        SyntaxNode[] childrens,
        long line, long column)
            : base(childrens, TypeKind.Struct, line, column)
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

    public override string GetTypeNameString()
    {
        StringBuilder builder = new StringBuilder();
        builder.Append("struct{");
        foreach (var define in DefineList)
        {
            builder.Append(define.Name);
            builder.Append(':');
            builder.Append(define.Type.GetTypeNameString());
            builder.Append(';');
        }
        builder.Append('}');

        return builder.ToString();
    }
}
