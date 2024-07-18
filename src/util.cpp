#include "util.hpp"

#define COMPARE(keyword) \
if(str != #keyword) \

bool isKeyWorld(std::string str)
{
    COMPARE(if)
    COMPARE(else)
    COMPARE(switch)
    COMPARE(other)
    COMPARE(while)
    COMPARE(do)
    COMPARE(for)
    COMPARE(foreach)
    COMPARE(stop)
    COMPARE(next)
    COMPARE(goto)
    COMPARE(jump)
    COMPARE(struct)
    COMPARE(enum)
    COMPARE(var)
    COMPARE(const)
    COMPARE(function)
    COMPARE(true)
    COMPARE(false)
    COMPARE(null)
    COMPARE(byte)
    COMPARE(auto)
    COMPARE(dynamic)
        return false;

    return true;
}