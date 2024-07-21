#ifndef MIKO_PARSE_HPP
#define MIKO_PARSE_HPP

#include "AST.hpp"
#include "token.hpp"

#include <cctype>
#include <cerrno>
#include <map>
#include <queue>
#include <vector>

class Parse
{
public:
    int NowToken = 0;
    std::vector<Token>* TokenList;
    std::map<std::string, IdentifierASTNode*> SymbolTable;

    Parse(std::vector<Token>* tokenList);

    ListASTNode* ListTypeParse();
    FunctionASTNode* FunctionParse();
    std::queue<ASTNode*> FunctionBodyParse();
    IdentifierASTNode* IdentifierParse();
    IdentifierASTNode* CallIdentifierParse();
    IdentifierNameASTNode* IdentifierNameParse();
    

    Token* GetNextToken();
};

#endif // MIKO_PARSE_HPP