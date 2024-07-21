#include "parse.hpp"

#include "AST.hpp"
#include "token.hpp"
#include "util.hpp"

#include <iostream>

Parse::Parse(std::vector<Token>* tokenList) : TokenList(tokenList)
{}

ListASTNode* Parse::ListTypeParse()
{
    ListASTNode* node;
    while((*TokenList)[NowToken].Value != ")")
    {
        NowToken++;
        if((*TokenList)[NowToken].Value == ",")
        {
            NowToken++;
            continue;
        }
        else if((*TokenList)[NowToken].Type == TokenType::TOKEN_IDENTIFIER)
        {
            node->List[(*TokenList)[NowToken].Value] = IdentifierParse();
            NowToken++;
        }
    }
    return node;
}

IdentifierASTNode* Parse::IdentifierParse()
{
    IdentifierASTNode* node;
    if((*TokenList)[NowToken].Value == "var")
    {
        node->IdType = IdentifierType::TYPE_VAR;
    }
    else
    {
        node->IdType = IdentifierType::TYPE_CONST;
    }

    NowToken++;

    if(isKeyWorld((*TokenList)[NowToken].Value))
    {
        std::cerr << "Can't use key word as identifier" << std::endl;
        throw "Can't use key word as identifier";
        return nullptr;
    }
    else
    {
        if((*TokenList)[NowToken].Value == "function")
        {
            node->IdValueType = FunctionParse();
        }
        else
        {
            node->IdValueType = IdentifierNameParse();
        }

        return node;
    }
}

IdentifierASTNode* Parse::CallIdentifierParse()
{
    IdentifierASTNode* node;
    IdentifierASTNode* parent;

    // TODO: Deep Identifier
    // List->List->List...->Identifier
    // in the List find next Identifier

    while ((*TokenList)[NowToken].Type == TokenType::TOKEN_IDENTIFIER)
    {
        
    }

        NowToken++;
        return node;
    }

IdentifierNameASTNode* Parse::IdentifierNameParse()
{
    IdentifierNameASTNode* node;


    while((*TokenList)[NowToken].Type == TokenType::TOKEN_IDENTIFIER)
    {
        if (SymbolTable.find((*TokenList)[NowToken].Value) == SymbolTable.end())
        {
            std::cerr << (*TokenList)[NowToken].Value << "is not defined" << std::endl;
            throw "is not defined";
        }

        node->Parents.push_back(SymbolTable[(*TokenList)[NowToken].Value]);
        NowToken++;
        if((*TokenList)[NowToken].Value == ".")
        {
            NowToken++;
        }
    }

    node->Name = (*TokenList)[NowToken].Value;
    NowToken++;

    return node;
}

FunctionASTNode* Parse::FunctionParse()
{
    NowToken++;
    FunctionASTNode* node;
    if((*TokenList)[NowToken].Type == TokenType::TOKEN_DL_BRACKET_OPEN)
    {
        node->Args = ListTypeParse();
        NowToken++;
        if((*TokenList)[NowToken].Type == TokenType::TOKEN_OP_RET)
        {
            NowToken++;
            node->RetType = SymbolTable[(*TokenList)[NowToken].Value];
            NowToken++;
        }
        else if((*TokenList)[NowToken].Type == TokenType::TOKEN_DL_CURLY_BRACE_OPEN)
        {
            node->RetType = nullptr;
        }
        else
        {
            std::cerr << "Function must have a return type or the return type is null" << std::endl;
            throw "must have a return type";
        }

        if ((*TokenList)[NowToken].Type == TokenType::TOKEN_DL_CURLY_BRACE_OPEN)
        {
            NowToken++;
        }
        else
        {
            std::cerr << "Function must have body" << std::endl;
            throw "must have body";
        }
    }
    else
    {
        std::cerr << "Function must have args" << std::endl;
        throw "Function must have args";
        return nullptr;
    }
    
    return node;
}

std::queue<ASTNode*> Parse::FunctionBodyParse()
{
    std::queue<ASTNode*> node;
    while((*TokenList)[NowToken].Value != "}")
    {
        NowToken++;
        if((*TokenList)[NowToken].Value == "var" || (*TokenList)[NowToken].Value == "const")
        {
            node.push(IdentifierParse());
        }
        else
        {
            
        }
    }
    return node;
}

Token* Parse::GetNextToken()
{
    return &(*TokenList)[NowToken + 1];
}