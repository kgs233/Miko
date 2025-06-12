#include "source.hpp"
#include "util.hpp"

#include <fstream>
#include <filesystem>
#include <iostream>
#include <stdexcept>

using namespace Miko;

Source::Source(const std::string& path_str) : path(path_str)
{
    if (not std::filesystem::exists(this->path))
    {
        std::cerr << "File " << path_str << " does not exist" << std::endl;
        throw std::runtime_error("File does not exist"); 
    }

    this->buf = new std::filebuf();
    if (not this->buf->open(this->path, std::ios::in))
    {
        std::cerr << "Failed to open file " << path_str << std::endl;
        throw std::runtime_error("Failed to open file");
    }
    
    this->rdbuf(this->buf);
}

Source::~Source()
{
    if (buf && buf->is_open()) {
        buf->close();
    }

    DISPOSE(buf);
}

std::string Source::GetSourcePath() const
{
    return path;
}