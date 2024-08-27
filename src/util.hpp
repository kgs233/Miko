#ifndef MIKO_UTIL_HPP
#define MIKO_UTIL_HPP

#include <string>

#define DIGIT \
'0' :         \
    case '1': \
case '2':     \
case '3':     \
case '4':     \
case '5':     \
case '6':     \
case '7':     \
case '8':     \
case '9'

#define ALPHA \
'a' :         \
    case 'b': \
case 'c':     \
case 'd':     \
case 'e':     \
case 'f':     \
case 'g':     \
case 'h':     \
case 'i':     \
case 'j':     \
case 'k':     \
case 'l':     \
case 'm':     \
case 'n':     \
case 'o':     \
case 'p':     \
case 'q':     \
case 'r':     \
case 's':     \
case 't':     \
case 'u':     \
case 'v':     \
case 'w':     \
case 'x':     \
case 'y':     \
case 'z':     \
case 'A':     \
case 'B':     \
case 'C':     \
case 'D':     \
case 'E':     \
case 'F':     \
case 'G':     \
case 'H':     \
case 'I':     \
case 'J':     \
case 'K':     \
case 'L':     \
case 'M':     \
case 'N':     \
case 'O':     \
case 'P':     \
case 'Q':     \
case 'R':     \
case 'S':     \
case 'T':     \
case 'U':     \
case 'V':     \
case 'W':     \
case 'X':     \
case 'Y':     \
case 'Z'

#define OPERATOR \
'+' :            \
    case '-':    \
case '*':        \
case '/':        \
case '%':        \
case '=':        \
case '<':        \
case '>':        \
case '!':        \
case '|':        \
case '&':        \
case '^'

bool isKeyWorld(std::string str);

inline std::string redString(std::string str)
{
    return "\033[1;31m" + str + "\033[0m";
}

inline std::string greenString(std::string str)
{
    return "\033[1;32m" + str + "\033[0m";
}

inline std::string yellowString(std::string str)
{
    return "\033[1;33m" + str + "\033[0m";
}

#endif