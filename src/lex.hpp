#ifndef MIKO_LEX_HPP
#define MIKO_LEX_HPP

#include <fstream>
#include <vector>

#include "token.hpp"

namespace Miko
{
    enum class LexState
    {
        LEX_STATE_NOMAL,
        LEX_STATE_INTEGER,
        LEX_STATE_STRING,
        LEX_STATE_CHAR,
        LEX_STATE_IDENTIFIER,
        LEX_STATE_SYMBOL,
        LEX_STATE_ESCAPE,
    };

    class Lexer
    {
    public:
        static std::vector<Token>* Lex(std::ifstream* File);
    };
}

#endif // MIKO_LEX_HPP