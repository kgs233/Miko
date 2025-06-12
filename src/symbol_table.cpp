#include "symbol_table.hpp"

#include <stdexcept>
#include <utility>
#include <vector>

#include "util.hpp"

using namespace Miko;

constexpr int LLVM_INT_MAX_SIZE = 8388607;

SymbolContext::~SymbolContext()
{
    for (auto child : localSymbolList)
    {
        DISPOSE(child.second);
    }
}

void SymbolContext::AddLocalSymbol(Symbol* symbol)
{
    localSymbolList.insert(std::make_pair(symbol->Name, symbol));
}

void SymbolContext::AddLocalSymbols(std::vector<Symbol*> symbols)
{
    for (auto child : symbols)
    {
        localSymbolList.insert(std::make_pair(child->Name, child));
    }
}

Symbol* SymbolContext::FindSymbol(std::string name)
{
    std::vector<std::string> nameList = SplitName(name);
    if (localSymbolList.find(nameList[0]) != localSymbolList.end())
    {
        if (nameList.size() == 1)
        {
            return localSymbolList[nameList[0]];
        }

        Type* type = static_cast<Storable*>(localSymbolList[nameList[0]])->Type;
        if (static_cast<Struct*>(type) != nullptr)
        {
            nameList.erase(nameList.begin());
            return static_cast<SymbolContext*>(static_cast<Struct*>(type))->FindSymbol(CombineName(nameList));
        }
    }

    return nullptr;
}

SymbolContext* Symbol::GetParent()
{
    return Parent;
}

Member::Member(Storable& storable, bool isStatic)
{
    Name = storable.Name;
    Type = storable.Type;
    Parent = storable.Parent;
}

UnkonwnType::UnkonwnType(std::string name) :
    name(name)
{ }

void LambdaType::AddArgument(Storable* argument)
{
    AddLocalSymbol(argument);
}

void LambdaType::SetReturnType(Type* type)
{
    if (retrunType != nullptr)
    {
        throw "Can't Set retrunType again";
    }

    retrunType = type;
}

Type* LambdaType::GetReturnType()
{
    return retrunType;
}

IntType::IntType(int size)
{
    // LLVM IR Int size max
    if (size > LLVM_INT_MAX_SIZE)
    {
        throw std::runtime_error("size too large");
    }
    else
    {
        this->size = size;
    }
}