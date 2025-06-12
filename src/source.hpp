#ifndef MIKO_SOURCE_HPP
#define MIKO_SOURCE_HPP

#include <istream>
#include <streambuf>
#include <string>
#include <filesystem>

namespace Miko
{

    class Source : public std::istream
    {
        std::filesystem::path path;
        std::filebuf* buf;
    public:
        Source(const std::string&); 
        ~Source(); 

        std::string GetSourcePath() const;
    };
}

#endif // MIKO_SOURCE_HPP