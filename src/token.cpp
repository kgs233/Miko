#include "token.hpp"

#include <string>

using namespace Miko;

Token::Token(TokenType type, std::string value, int line, int columnStart, int columnEnd)
{
    this->Type = type;
    this->Value = value;
    this->Line = line;
    this->ColumnStart = columnStart;
    this->ColumnEnd = columnEnd;
}