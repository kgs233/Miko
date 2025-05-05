#ifndef MIKO_SYMBOL_TABLE_HPP
#define MIKO_SYMBOL_TABLE_HPP

#include <string>
#include <vector>

enum class SymbolType
{
    CompileType,
    CompileFunction,
    Struct,
    Member,
    Storable,
    TopObject,
    MemberFunction
};

enum class CompileTypeType
{
    Int,
    FP16,
    FP32,
    FP64,
    FP128,
    Pionter,
    Void
};

enum class Visibility
{
    Public,
    Private
};

enum class Variability
{
    Var,
    Const,
    Define
};


class Symbol
{
public:
    std::string name;
    Symbol* parent;
    SymbolType symbolType;

    Symbol() = default;

    SymbolType GetType();

    virtual Symbol* GetParent() { return parent; }

    operator std::string() { return name; }
};

class Type : public Symbol
{
public:
    Type() = default;
};

class Storable : public Symbol
{
public:
    Type* type;
    SymbolType symbolType = SymbolType::Storable;
    Variability variability;
};

class Member : public Storable
{
public:
    SymbolType symbolType = SymbolType::Member;
    Visibility visibility;
    Member() = default;
    Member(Storable& storable);
};

class TopObject : public Member
{
public:
    TopObject() = default;
};

class LambdaType : public Type
{
public:
    LambdaType() = default;

    Type* retrunType;
    std::vector<Storable> arguments;
    std::vector<Storable> localSymbol;
};

class CompileType : public Type
{
public:
    SymbolType symbolType = SymbolType::CompileType;
    CompileTypeType compileTypeType;

    CompileType() = delete;
    CompileType(CompileTypeType compileTypeType);
};

class IntType : public CompileType
{
    int size;
public:
    IntType(int size);

    inline int GetSize() { return size; }
};

class VoidType : public CompileType
{
public:
    VoidType();
};



#endif // MIKO_SYMBOL_TABLE_HPP