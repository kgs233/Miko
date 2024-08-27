#ifndef MIKO_SOURCE_HPP
#define MIKO_SOURCE_HPP

#include <string>
#include <vector>

#include "token.hpp"

namespace Miko
{
    class Source
    {
    public:
        std::string FileName;
        std::vector<Token>* Tokens;

        Source(std::string fileName);

        void Compile();
    };
}

#endif // MIKO_SOURCE_HPP