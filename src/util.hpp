#ifndef MIKO_UTIL_HPP
#define MIKO_UTIL_HPP

#include <string>
#include <vector>

constexpr std::vector<std::string> SplitName(std::string name)
{
    std::vector<std::string> ret;
    std::string delimiter = ".";
    size_t pos = 0;
    std::string token;
    while ((pos = name.find(delimiter)) != std::string::npos)
    {
        token = name.substr(0, pos);
        ret.push_back(token);
        name.erase(0, pos + delimiter.length());
    }
    ret.push_back(name);
    return ret;
}

#endif