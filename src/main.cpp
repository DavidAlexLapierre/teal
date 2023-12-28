#include "cmdParser.h"
#include "utils/logger.h"
#include "cmd/test.h"

int main(int argc, char *argv[]) {
    Teal::test();
    if (argc < 2) {
        Teal::Logger::err("Please add a command. Use parameter \"help\" to get a list of commands.");

        return -1;
    }
    
    Teal::CmdParser parser;
    if (!parser.run(argv[1], argc, argv)) {
        Teal::Logger::err("Failed to run command");
    }
    return 0;
}
