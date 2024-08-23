#include "error.hpp"
#include "source.hpp"
int main(int argc, char* argv[])
{
    info(ERROR_LEX, "this is a info");
    warn(ERROR_LEX, "this is a warn");
    error(ERROR_LEX, "this is a error");
    return 0;
}