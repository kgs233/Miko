#include "source.hpp"
#include "token.hpp"
#include <string>


Source::Source(std::string fileName)
{
    this->FileName = fileName;
}

Token::Token(TokenType type, std::string value, int line, int columnStart, int columnEnd)
{
    this->Type = type;
    this->Value = value;
    this->Line = line;
    this->ColumnStart = columnStart;
    this->ColumnEnd = columnEnd;
}