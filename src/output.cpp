#include "output.hpp"

using namespace Miko;

Output::Output(std::string name) :
    path(name)
{ }

Symbol* Output::FindSymbol(std::string name)
{
    Symbol* symbol;
    for (auto source : sourceList)
    {
        symbol = source->FindSymbol(name);
        if (symbol != nullptr)
        {
            return symbol;
        }
    }

    return nullptr;
}