namespace Miko;

public enum ASTNodeType
{
    Statement,
    Structure,
    Identifier,
    Expression,
    Block,

    ProgramStructure,

    OpenStatement,
    OpenExpression,
    
    DeclarationStatement,

    OperationExpression,
    UnaryOperationExpression,
    BinaryOperationExpression,

    VariableIdentifier,
    ConstantIdentifier,
    FunctionIdentifier,

    AssignmentExpression,
    
    CreateSyntax,
    DisposeSyntax,
}