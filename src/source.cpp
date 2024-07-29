#include "source.hpp"

#include <cctype>
#include <cerrno>
#include <fstream>
#include <ios>
#include <string>

#include "lex.hpp"

Source::Source(std::string fileName)
{
    this->FileName = fileName;
}

void Source::Compile()
{
    std::ifstream sourceFile(this->FileName);
    sourceFile.unsetf(std::ios::skipws);
    Tokens = Lexer::Lex(&sourceFile);
}