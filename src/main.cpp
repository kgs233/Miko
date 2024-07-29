#include "source.hpp"
int main(int argc, char* argv[])
{
    Source source(argv[1]);
    source.Compile();

    return 0;
}