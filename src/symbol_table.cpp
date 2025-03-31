#include "symbol_table.hpp"

#include <stdexcept>

SymbolType Symbol::GetType()
{
    return symbolType;
}

CompileType::CompileType(CompileTypeType compileTypeType)
{
    this->compileTypeType = compileTypeType;
}

IntType::IntType(int size) : CompileType(CompileTypeType::Int)
{
    this->name = "int" + std::to_string(size);
    if(size > 8388607)
    {
        throw std::runtime_error("size too large");
    }
    else 
    {
        this->size = size;
    }
}

VoidType::VoidType() : CompileType(CompileTypeType::Void)
{
    this->name = "void";
}