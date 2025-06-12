#ifndef MIKO_OUTPUT_HPP
#define MIKO_OUTPUT_HPP

#include <filesystem>
#include <string>
#include <vector>

#include "symbol_table.hpp"

namespace Miko
{
    class Output
    {
        std::filesystem::path path;
        std::vector<Struct*> sourceList;

    public:
        Output(std::string name);

        Symbol* FindSymbol(std::string name);
    };
}

#endif // MIKO_OUTPUT_HPP