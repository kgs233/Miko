#ifndef MIKO_UTIL_HPP
#define MIKO_UTIL_HPP

#include <string>

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