#ifndef MIKO_PARSE_HPP
#define MIKO_PARSE_HPP

#include "AST.hpp"
#include "token.hpp"

#include <cctype>
#include <cerrno>
#include <queue>
#include <string>
#include <vector>

class Parse
{
public:
    int NowTokenNum = 0;
    std::string NowTokenValue;
    TokenType NowTokenType;
    std::vector<Token>* TokenList;
    StructASTNode ProgramSymbolTable;
    StructASTNode* NowStructSymbolTable;

    Parse(std::vector<Token>* tokenList);

    StructASTNode* ListTypeParse(StructASTNode* node);
    FunctionASTNode* FunctionParse();
    std::queue<ASTNode*> FunctionBodyParse();
    IdentifierASTNode* DeclarationParse(StructASTNode* symbolTable);
    IdentifierASTNode* DeclarationNameParse(StructASTNode* symbolTable, IdentifierASTNode* node);
    IdentifierASTNode* CallIdentifierParse(StructASTNode* symbolTable);
    IdentifierNameASTNode* IdentifierNameParse();
    

    void NextToken();
    Token* GetNextToken();
};

#endif // MIKO_PARSE_HPP