#ifndef MIKO_AST_HPP
#define MIKO_AST_HPP

#include "token.hpp"
#include <map>
#include <queue>
#include <string>
#include <vector>

enum class ASTNodeType
{
    AST_TYPE_ROOT,
    AST_TYPE_CHAR,
    AST_TYPE_NUMBER,
    AST_TYPE_FUNCTION,
    AST_TYPE_STRING,
    AST_TYPE_LIST,
    AST_TYPE_STRUCT,
    AST_TYPE_IDENTIFIER,

    AST_TYPE_BINARY_ADD,
    AST_TYPE_BINARY_SUB,
    AST_TYPE_BINARY_MUL,
    AST_TYPE_BINARY_DIV,
    AST_TYPE_BINARY_MOD,
    AST_TYPE_BINARY_EXP
};

enum class IdentifierType
{
    TYPE_CONST,
    TYPE_VAR
};

enum class IdentifierVisibility
{
    VISIBILITY_LOCAL,
    VISIBILITY_STRUCT,
    VISIBILITY_PUBLIC
};

class ASTNode
{
public:
    ASTNode* Parent;
    ASTNodeType Type;

    int StartLine, EndLine,
        StartColumn, EndColumn;
};

class RootASTNode : public ASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_ROOT;
    std::vector<ASTNode*> ASTree;

    RootASTNode();
};

class StmASTNode : public ASTNode
{
public:
    ASTNode Body;

    StmASTNode(ASTNode body);
};

class IdentifierNameASTNode;
class IdentifierASTNode : public ASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_IDENTIFIER;
    IdentifierNameASTNode* Name;
    IdentifierVisibility IdVisibility;
    IdentifierType IdType;
    ASTNode* Value;

    IdentifierASTNode(std::string name, ASTNode* value);
};

class IdentifierNameASTNode : public ASTNode
{
public:
    std::vector<IdentifierASTNode*> Parents;
    std::string Name;
};

class CallIdentifier : public ASTNode
{
public:
    CallIdentifier();
};

class CharASTNode : public ASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_CHAR;
    char Val;

    CharASTNode(char val);
};

class NumberASTNode : public ASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_NUMBER;
    long long Val;

    NumberASTNode(double val);
};

class FloatASTNode : public ASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_NUMBER;
    int Integer, Decimal;
    double Full;

    FloatASTNode(int integer, int decimal);
};

class OperatorASTNode : public ASTNode
{
};

class BinaryASTNode : public OperatorASTNode
{
public:
    TokenType Op;
    ASTNode *LHS, *RHS;

    BinaryASTNode(TokenType op, ASTNode* lhs, ASTNode* rhs);
};

class UnaryASTNode : public OperatorASTNode
{
public:
    TokenType Op;
    ASTNode* OpObject;

    UnaryASTNode(TokenType op, ASTNode* opObject);
};

class ExprASTNode : public ASTNode
{
public:
    OperatorASTNode* RootOp;

    ExprASTNode(OperatorASTNode* rootOp);
};

class ListASTNode : public ASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_LIST;
    std::vector<IdentifierASTNode*> List;
    std::map<std::string, IdentifierASTNode*> ListMap;

    void AddNode(std::string Name, IdentifierASTNode* Node);

    ListASTNode();
};

class FunctionASTNode : public ASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_FUNCTION;
    ListASTNode* Args;
    std::queue<ASTNode*> FunctionBody;
    IdentifierASTNode* RetType;
};

class StructASTNode : public ListASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_STRUCT;
    int ObjectNum;
    std::map<std::string, IdentifierASTNode*> VarList, ConstList, FunctionList, ListList, StructList;

    void AddNode(IdentifierASTNode* Node);

    StructASTNode();
};

#endif // MIKO_AST_HPP