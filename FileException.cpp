#include "FileException.h"

FileException::FileException(std::string&& error) {
    this->error = std::move(error);
}

const char *FileException::what() const noexcept {
    return error.c_str();
}

FileException::~FileException() {}

