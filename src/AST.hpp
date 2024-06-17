#ifndef MIKO_AST_HPP
#define MIKO_AST_HPP

#include "token.hpp"
#include <vector>

enum class ASTNodeType
{
    Root,
    Char,
    Number,
    Float,
    Binary,
    Unary
};

class ASTNode
{
public:
    ASTNode* Parent;
    ASTNodeType Type;
};

class RootASTNode : public ASTNode
{
public:
    std::vector<ASTNode*> ASTree;

    RootASTNode();
};

class CharASTNode : public ASTNode
{
public:
    char Val;

    CharASTNode(char val);
};

class NumberASTNode : public ASTNode
{
public:
    long long Val;

    NumberASTNode(double val);
};

class FloatASTNode : public ASTNode
{
public:
    int Integer;
    int Decimal;
    double Full;

    FloatASTNode(int integer, int decimal);
};

class BinaryASTNode : public ASTNode
{
public:
    TokenType Op;
    ASTNode *LHS, *RHS;

    BinaryASTNode(TokenType op, ASTNode* lhs, ASTNode* rhs);
};

class UnaryASTNode : public ASTNode
{
public:
    TokenType Op;
    ASTNode* OpObject;

    UnaryASTNode(TokenType op, ASTNode* opObject);
};

#endif // MIKO_AST_HPP