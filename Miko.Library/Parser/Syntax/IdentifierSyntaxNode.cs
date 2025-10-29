namespace Miko.Library.Parser.Syntax;

public class IdentifierSyntaxNode(
    IEnumerable<string> names,
    long line, long column) : SyntaxEndNode(line, column)
{
    public string[] Names { get; init; } = [.. names];

    public string GetFullNameString()
    {
        return string.Join(".", Names);
    }
}
