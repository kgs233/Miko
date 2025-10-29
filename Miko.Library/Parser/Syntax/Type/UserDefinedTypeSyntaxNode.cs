using System;

namespace Miko.Library.Parser.Syntax.Type;

public class UserDefinedTypeSyntaxNode(
    IdentifierSyntaxNode identifier,
    long line, long column) : TypeSyntaxNode([identifier], TypeKind.CallVar, line, column)
{
    IdentifierSyntaxNode Identifier { get; init; } = identifier;
    public override string GetTypeNameString() => Identifier.GetFullNameString();
}
