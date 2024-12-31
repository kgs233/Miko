#include "source.hpp"

#include <cctype>
#include <cerrno>
#include <fstream>
#include <ios>
#include <string>

using namespace Miko;

Source::Source(const std::string& fileName) : fileName(fileName)
{
    this->open(fileName);
}

Source::~Source()
{
    this->close();
}