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
        Source(std::string);
        ~Source();
    };
}

#endif // MIKO_SOURCE_HPP