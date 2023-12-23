#include "cmdParser.h"
#include "utils/logger.h"

int main(int argc, char *argv[]) {

    if (argc < 2) {
        Teal::Logger::err("Please add a command. Use parameter \"help\" to get a list of commands.");

        return -1;
    }

    auto parser = new Teal::CmdParser();

    parser->parse(argv[1]);

    delete parser;
    return 0;
}
