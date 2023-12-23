#include "logger.h"

#include <iostream>



namespace Teal {

    const char* Logger::ERROR_COLOR = "\033[1;31m";
    const char* Logger::WARN_COLOR = "\033[1;33m";
    const char* Logger::RESET_COLOR = "\033[0m";

    void Logger::log(const char* msg) {
        std::cout << msg << std::endl;
    }

    void Logger::err(const char* msg) {
        std::cerr << Logger::ERROR_COLOR << msg << Logger::RESET_COLOR << std::endl;
    }

    void Logger::warn(const char* msg) {
        std::cout << Logger::WARN_COLOR << msg << Logger::RESET_COLOR << std::endl;
    }
}
