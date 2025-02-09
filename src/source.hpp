#ifndef MIKO_SOURCE_HPP
#define MIKO_SOURCE_HPP

#include <istream>
#include <streambuf>
#include <string>
#include <filesystem>

#include <antlr4-runtime.h>

#include "ANTLRInputStream.h"
#include "pre/MikoLexerRules.h"
#include "pre/MikoParserRules.h"

namespace Miko
{

    class Source
    {
    private:
        std::filesystem::path path;

        antlr4::ANTLRInputStream input;
        MikoLexerRules lexer;
        MikoParserRules parser;
        antlr4::CommonTokenStream tokenStream;
        MikoParserRules::ProgContext* AST;
    public:
        Source(std::string);
        ~Source() = default;    

        void PreCompile();

        void PrintAST();
        void PrintTokenStream();
    };
}

#endif // MIKO_SOURCE_HPP