#include "source.hpp"

#include <filesystem>
#include <iostream>
#include <istream>
#include <streambuf>

#include "CommonTokenStream.h"
#include "antlr4-runtime.h"

#include "pre/MikoLexerRules.h"
#include "pre/MikoParserRules.h"

using namespace Miko;

Source::Source(std::string path) : lexer(&input), tokenStream(&lexer), parser(&tokenStream)
{
    this->path = *(new std::filesystem::path(path));
    if (not std::filesystem::exists(this->path))
    {
        std::cerr << "File " << path << " does not exist" << std::endl;
        throw "File does not exist";
    }
}

void Source::PreCompile()
{
    std::ifstream inputStream(path);
    input.load(inputStream);
    inputStream.close();
    tokenStream.fill();
    AST = parser.prog();
}

void Source::PrintAST()
{
    std::cout << AST->toStringTree(&parser) << std::endl;
}

void Source::PrintTokenStream()
{
    for (const auto& token : tokenStream.getTokens())
    {
        std::cout << token->toString() << std::endl;
    }
}