#include "utils/logger.h"

int main(int argc, char *argv[]) {

    if (argc < 2) {
        Teal::Logger::err("Please select a command");
    } else {
        Teal::Logger::warn(argv[1]);
    }

    return 0;
}
