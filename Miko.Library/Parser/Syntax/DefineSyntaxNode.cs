using Miko.Library.Parser.Syntax.Type;

namespace Miko.Library.Parser.Syntax;

public class DefineSyntaxNode(
    IdentifierSyntaxNode name,
    TypeSyntaxNode type,
    bool isPublic,
    bool isStatic,
    long line, long column) : SyntaxNode([name, type], line, column)
{
    public IdentifierSyntaxNode Name { get; init; } = name;
    public TypeSyntaxNode Type { get; init; } = type;
    public bool IsPublic { get; init; } = isPublic;
    public bool IsStatic { get; init; } = isStatic;
}
