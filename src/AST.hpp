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

enum class VisibilityType
{
    VISIBILITY_TYPE_PUBLIC,
    VISIBILITY_TYPE_PRIVATE,
    VISIBILITY_TYPE_CUSTOM,
};

enum class VariabilityType
{
    VARIABILITY_TYPE_VAR,
    VARIABILITY_TYPE_CONST,
};

class IdentifierASTNode;

struct IdentifierVisibility
{
    VisibilityType Type;
    std::vector<IdentifierASTNode*> VisibilityList;
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
    std::string Name;
    IdentifierVisibility Visibility;
    VariabilityType Variability;
    bool Static;
    ASTNode* Value;

    IdentifierASTNode(std::string name, ASTNode* value);
};
class DeclareIdentifierASTNode : public ASTNode
{
    IdentifierASTNode* Parent;
    
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
    int MemberNum;
    std::vector<IdentifierASTNode*> List;

    void AddNode(IdentifierASTNode* Node);

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

class StructASTNode : public ASTNode
{
public:
    ASTNodeType Type = ASTNodeType::AST_TYPE_STRUCT;
    int MemberNum;
    std::map<std::string, IdentifierASTNode*> MemberMap;

    void AddNode(IdentifierASTNode* node);
    void AddNodeInList(ListASTNode* list);

    StructASTNode();
    StructASTNode(ListASTNode* listNode);
    StructASTNode(StructASTNode* structNode);
};

#endif // MIKO_AST_HPP