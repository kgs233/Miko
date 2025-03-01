#include "AST.hpp"
#include "codegen.hpp"
#include "source.hpp"
#include <llvm/Support/raw_ostream.h>

using namespace Miko;

int main(int argc, char const *argv[])
{
    Source source(argv[1]);
    AST preCompile(&source);
    preCompile.PrintTokens();
    preCompile.PrintAST();
    CodeGen codeGen(&preCompile);
    codeGen.Gen();
    codeGen.PrintIR();
    return 0;
}