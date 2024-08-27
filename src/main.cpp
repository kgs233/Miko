#include "AST.hpp"
#include "error.hpp"
#include "source.hpp"

using namespace Miko;

int main(int argc, char* argv[])
{
    RootASTNode test("abc");
    std::cout << test.GetIR() << std::endl;
    return 0;
}