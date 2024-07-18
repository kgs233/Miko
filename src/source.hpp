#ifndef MIKO_SOURCE_HPP
#define MIKO_SOURCE_HPP

#include <string>
#include <vector>

#include "token.hpp"

#define DIGIT \
    '0' :     \
    case '1': \
    case '2': \
    case '3': \
    case '4': \
    case '5': \
    case '6': \
    case '7': \
    case '8': \
    case '9'

#define ALPHA   \
    'a' :       \
    case 'b':   \
    case 'c':   \
    case 'd':   \
    case 'e':   \
    case 'f':   \
    case 'g':   \
    case 'h':   \
    case 'i':   \
    case 'j':   \
    case 'k':   \
    case 'l':   \
    case 'm':   \
    case 'n':   \
    case 'o':   \
    case 'p':   \
    case 'q':   \
    case 'r':   \
    case 's':   \
    case 't':   \
    case 'u':   \
    case 'v':   \
    case 'w':   \
    case 'x':   \
    case 'y':   \
    case 'z':   \
    case 'A':   \
    case 'B':   \
    case 'C':   \
    case 'D':   \
    case 'E':   \
    case 'F':   \
    case 'G':   \
    case 'H':   \
    case 'I':   \
    case 'J':   \
    case 'K':   \
    case 'L':   \
    case 'M':   \
    case 'N':   \
    case 'O':   \
    case 'P':   \
    case 'Q':   \
    case 'R':   \
    case 'S':   \
    case 'T':   \
    case 'U':   \
    case 'V':   \
    case 'W':   \
    case 'X':   \
    case 'Y':   \
    case 'Z'

#define OPERATOR \
    '+' :      \
    case '-':  \
    case '*':  \
    case '/':  \
    case '%':  \
    case '=':  \
    case '<':  \
    case '>':  \
    case '!':  \
    case '|':  \
    case '&':  \
    case '^'

enum class LexState {
    LEX_STATE_NOMAL,
    LEX_STATE_INTEGER,
    LEX_STATE_STRING,
    LEX_STATE_CHAR,
    LEX_STATE_IDENTIFIER,
    LEX_STATE_SYMBOL,
    LEX_STATE_ESCAPE,
};

class Source
{
public:
    std::string FileName;
    std::vector<Token> Tokens;

    Source(std::string fileName);

    void Lex();
};

#endif // MIKO_SOURCE_HPP