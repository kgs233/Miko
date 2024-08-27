#include "parse.hpp"

#include "AST.hpp"
#include "error.hpp"
#include "token.hpp"
#include "util.hpp"

#include <iostream>
#include <queue>

using namespace Miko;

Parse::Parse(std::vector<Token>* tokenList)
{
    TokenList = tokenList;
    NowTokenNum = 0;
}

// ListType : "(" $(ListTypeChild)
// ListTypeChild : $(variability) $Identifier ":" $Type "," $ListTypeChild
//               : $(variability) $Identifier ")"
ListASTNode* Parse::ListTypeParse(ListASTNode* list)
{
    if (NowTokenType == TokenType::TOKEN_DL_PAREN_CLOSE)
    {
        NextToken();

        IdentifierASTNode* node;
        node = DeclarationParse(NowStructSymbolTable, node);
        list->AddNode(node);

        if (NowTokenType == TokenType::TOKEN_DL_COMMA)
        {
            NextToken();
        }
        else
        {
            error(ERROR_PARSE, "Unknown Delimiter");
        }

        return ListTypeParse(list);
    }
    else
    {
        NextToken();
        return list;
    }
}

// Type : $Identifier
//      | $ListType
//      | $Function
//      | $Struct
//      | $Enum
ASTNode* Parse::TypeParse(StructASTNode* symbolTable)
{
    if (NowTokenType == TokenType::TOKEN_DL_COMMA)
    {
        NextToken();
    }
    else
    {
        warn(ERROR_PARSE, "Identifiers have no type");
    }

    if (NowTokenType == TokenType::TOKEN_DL_PAREN_OPEN)
    {
        ListASTNode* list;
        list = ListTypeParse(list);
        if (NowTokenType == TokenType::TOKEN_OP_PASS)
        {
            return FunctionParse(symbolTable, list);
        }
        else
        {
        }
    }
    else
    {
        return CallIdentifierParse(symbolTable);
    }
}

// Member : $Visibility $Static $IdentifierDefine
IdentifierASTNode* Parse::MemberParse(StructASTNode* symbolTable)
{
    IdentifierASTNode* node;
    if (GetNextToken()->Type != TokenType::TOKEN_DL_COLON)
    {
        if (NowTokenValue == "public")
        {
            node->Visibility.Type = VisibilityType::VISIBILITY_TYPE_PUBLIC;
        }
        else if (NowTokenValue == "private")
        {
            node->Visibility.Type = VisibilityType::VISIBILITY_TYPE_PRIVATE;
        }
        // TODO: only(xxx, xxx)
        NextToken();
    }

    if (GetNextToken()->Type != TokenType::TOKEN_DL_COLON)
    {
        if (NowTokenValue == "static")
        {
            node->Static = true;
        }

        NextToken();
    }

    return DeclarationParse(symbolTable, node);
}

// IdentifierDefine : $Identifier ":“ $Type
IdentifierASTNode* Parse::DeclarationParse(StructASTNode* symbolTable, IdentifierASTNode* node)
{
    if (GetNextToken()->Type != TokenType::TOKEN_DL_COLON)
    {
        if (NowTokenValue == "var")
        {
            node->Variability = VariabilityType::VARIABILITY_TYPE_VAR;
        }
        else if (NowTokenValue == "const")
        {
            node->Variability = VariabilityType::VARIABILITY_TYPE_CONST;
        }
        NextToken();
    }

    DeclarationNameParse(symbolTable, node);

    if (NowTokenType != TokenType::TOKEN_DL_COLON)
    {
        error(ERROR_PARSE, "Identifier must have type");
    }

    node->Value = TypeParse((StructASTNode*)symbolTable->MemberMap[NowTokenValue]->Value);

    return node;
}

// Identifier : STR "." $Identifier
//            | STR
IdentifierASTNode* Parse::DeclarationNameParse(StructASTNode* symbolTable, IdentifierASTNode* node)
{
    if (GetNextToken()->Type == TokenType::TOKEN_DL_DOT)
    {
        NextToken();

        if (symbolTable->MemberMap.find(NowTokenValue) != symbolTable->MemberMap.end())
        {
            IdentifierASTNode childNode = *node;
            childNode.Name = NowTokenValue;
            symbolTable->AddNode(&childNode);
        }

        bool paseIdIsNotStruct = symbolTable->MemberMap.find(NowTokenValue) != symbolTable->MemberMap.end();
        if (paseIdIsNotStruct)
        {
            error(ERROR_PARSE, "Only struct can add child");
        }

        NextToken();
        return DeclarationNameParse((StructASTNode*)symbolTable->MemberMap[NowTokenValue]->Value, node);
    }
    else
    {
        if (symbolTable->MemberMap.find(NowTokenValue) != symbolTable->MemberMap.end())
        {
            node->Name = NowTokenValue;
            symbolTable->AddNode(node);
            NextToken();

            return node;
        }
        else
        {
            error(ERROR_PARSE, "Unknow end sysboml");
        }
    }
}

IdentifierASTNode* Parse::CallIdentifierParse(StructASTNode* symbolTable)
{
    if (symbolTable->MemberMap.find(NowTokenValue) == symbolTable->MemberMap.end())
    {
        if (GetNextToken()->Type == TokenType::TOKEN_DL_DOT)
        {
            bool paseIdIsStruct = typeid(symbolTable->MemberMap[NowTokenValue]->Value) == typeid(StructASTNode);
            if (paseIdIsStruct)
            {
                NextToken();
                NextToken();
                return CallIdentifierParse((StructASTNode*)symbolTable->MemberMap[NowTokenValue]->Value);
            }
            else
            {
                error(ERROR_PARSE, "Only struct can get child id");
            }
        }
        else
        {
            return symbolTable->MemberMap[NowTokenValue];
        }
    }
    else
    {
        error(ERROR_PARSE, "Can't found Symbol");
    }
}

// Function : $ListType "=>" $Type "{" $FunctionBody
FunctionASTNode* Parse::FunctionParse(StructASTNode* symbolTable, ListASTNode* args)
{
    FunctionASTNode* node;
    node->Args = args;
    NextToken();

    if (GetNextToken()->Type != TokenType::TOKEN_IDENTIFIER)
    {
        warn(ERROR_PARSE, "Function not have return type");
        // TODO: default return type is dynamic
        NextToken();
    }
    else
    {
        node->RetType = CallIdentifierParse(symbolTable);
    }

    if (NowTokenType != TokenType::TOKEN_DL_BRACKET_OPEN)
    {
        return node;
    }

    NextToken();
    std::queue<ASTNode*> functionBody;
    functionBody = FunctionBodyParse(functionBody);
    return node;
}

std::queue<ASTNode*> Parse::FunctionBodyParse(std::queue<ASTNode*> body)
{
}

void Parse::NextToken()
{
    NowTokenNum++;
    NowTokenValue = (*TokenList)[NowTokenNum].Value;
    NowTokenType = (*TokenList)[NowTokenNum].Type;
}

Token* Parse::GetNextToken()
{
    return &(*TokenList)[NowTokenNum + 1];
}