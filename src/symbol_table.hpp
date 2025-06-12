#ifndef MIKO_SYMBOL_TABLE_HPP
#define MIKO_SYMBOL_TABLE_HPP

#include <llvm/IR/LLVMContext.h>
#include <llvm/IR/Type.h>

#include <map>
#include <string>
#include <vector>

namespace Miko
{
    class Storable;
    class Symbol;

    class SymbolContext
    {
        std::map<std::string, Symbol*> openSymbolList;
        std::map<std::string, Symbol*> localSymbolList;

    public:
        virtual void AddLocalSymbol(Symbol* symbol);
        virtual void AddLocalSymbols(std::vector<Symbol*> symbols);

        virtual Symbol* FindSymbol(std::string name);

        virtual ~SymbolContext();
    };

    class OpenContext : public SymbolContext
    {
    };

    class Symbol
    {
    public:
        enum class Kind
        {
            None,

            Storable,
            Member,

            Prog,
            Struct,
        };

        std::string Name;
        SymbolContext* Parent;
        const Kind SymbolKind = Kind::None;

        Symbol() = default;

        void SetParent(SymbolContext* parent);
        SymbolContext* GetParent();

        operator std::string()
        {
            return Name;
        }

        virtual ~Symbol() = default;
    };

    class Type
    {
    public:
        enum class Kind
        {
            None,
            CompileType,
            CompileFunction,
            Lambda
        };

        const Type::Kind TypeKind = Type::Kind::None;

        bool isConst;

        Type() = default;
        virtual ~Type() = default;
    };

    class Storable : public Symbol
    {
    public:
        const Symbol::Kind SymbolKind = Symbol::Kind::Storable;

        Type* Type;
        SymbolContext* Parent;
    };

    class Member : public Storable
    {
    public:
        enum class Visibility
        {
            Public,
            Private
        };

        const Symbol::Kind SymbolKind = Symbol::Kind::Member;

        bool isStatic;
        Visibility VisibilityKind;

        Member() = default;
        Member(Storable& storable, bool isStatic);
    };

    class UnkonwnType : public Type
    {
        std::string name;

    public:
        const Type::Kind TypeKind = Type::Kind::None;

        UnkonwnType() = delete;
        UnkonwnType(std::string name);

        constexpr std::string GetName() const
        {
            return name;
        }
    };

    class Struct : public Type, public SymbolContext
    {
        std::vector<Member> members;

    public:
        const Symbol::Kind TypeKind = Symbol::Kind::Struct;
    };

    class LambdaType : public Type, SymbolContext
    {
        Type* retrunType;
        std::vector<Storable> arguments;

    public:
        const Type::Kind TypeKind = Type::Kind::Lambda;

        LambdaType() = default;

        void AddArgument(Storable* argument);
        void SetReturnType(Type* type);
        Type* GetReturnType();
    };

    class CompileType : public Type
    {
    public:
        enum class Kind
        {
            None,

            Void,
            Pionter,

            Int,

            FP16,
            FP32,
            FP64,
            FP128,
        };

        const Type::Kind TypeKind = Type::Kind::CompileType;
        CompileType::Kind CompileTypeKind;

        CompileType() = default;
    };

    class VoidType : public CompileType
    {
    public:
        const CompileType::Kind CompileTypeKind = CompileType::Kind::Void;

        VoidType() = default;
    };

    class IntType : public CompileType
    {
        int size;

    public:
        const CompileType::Kind CompileTypeKind = CompileType::Kind::Int;

        IntType(int size);

        int GetSize() const;
    };
}

#endif // MIKO_SYMBOL_TABLE_HPP