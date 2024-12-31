#ifndef MIKO_SOURCE_HPP
#define MIKO_SOURCE_HPP

#include <string>
#include <vector>
#include <fstream>

namespace Miko
{
    class Source : std::ifstream
    {
    public:
        const std::string fileName;
        Source(const std::string& fileName);
        ~Source();
    };
}

#endif // MIKO_SOURCE_HPP