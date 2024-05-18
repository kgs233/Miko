namespace Miko;

public enum ASTNodeType
{
    Statement,
    Structure,
    Identifier,
    Expression,

    ProgramStructure,

    OpenStatement,
    OpenExpression,
    
    DeclarationStatement,

    OperationExpression,
    UnaryOperationExpression,
    BinaryOperationExpression,

    ConstIdentifier,

    AssignmentExpression,
    
    CreateSyntax,
    DisposeSyntax,
}