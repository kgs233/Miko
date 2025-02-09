#include <iostream>
#include <ratio>
#include "antlr4-runtime.h"
#include "pre/MikoLexerRules.h"
#include "pre/MikoParserRules.h"
#include "source.hpp"

using namespace Miko;

int main(int argc, char const *argv[])
{
    Source source(argv[1]);
    source.PreCompile();
    source.PrintAST();
    source.PrintTokenStream();
    return 0;
}