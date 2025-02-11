#include "AST.hpp"
#include "source.hpp"

using namespace Miko;

int main(int argc, char const *argv[])
{
    Source source(argv[1]);
    AST preCompile(source);
    preCompile.PrintTokens();
    preCompile.PrintAST();
    return 0;
}