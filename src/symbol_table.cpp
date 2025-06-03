#include "symbol_table.hpp"

#include <stdexcept>
#include <utility>
#include <vector>

#include "util.hpp"

using namespace Miko;

constexpr int LLVM_INT_MAX_SIZE = 8388607;

void SymbolContext::AddLocalSymbol(Symbol symbol)
{
    localSymbolList.insert(std::make_pair(symbol.Name, symbol));
}

void SymbolContext::AddLocalSymbols(std::vector<Symbol> symbols)
{
    for (auto child : symbols)
    {
        localSymbolList.insert(std::make_pair(child.Name, child));
    }
}

GlobalContext* GlobalContext::GetGlobalContext()
{
    return &globalContext;
}

Symbol* SymbolContext::FindSymbol(std::string name)
{
    std::vector<std::string> nameList = SplitName(name);
    SymbolContext nowContext = *this;
    for(auto child : nameList)
    {
        if (nowContext.localSymbolList.find(child) == nowContext.localSymbolList.end())
        {
            return nullptr;
        }
        nowContext = *nowContext.localSymbolList[child].GetParent();
    }
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

LambdaType::LambdaType()
{
}

void LambdaType::AddArgument(Storable argument)
{
    AddLocalSymbol(argument);
    AddArgument(argument);
}

void LambdaType::SetReturnType(Type* type)
{
    if(retrunType != nullptr)
    {
        throw "Can't Set retrunType again";
    }

    retrunType = type;
}

Type* LambdaType::GetReturnType()
{
    return retrunType;
}

IntType::IntType(int size) :
    CompileType(CompileType::Kind::Int)
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