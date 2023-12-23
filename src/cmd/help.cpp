#include "help.h"

namespace Teal {
    void executeHelp(int argc, char *argv[]) {
        auto msg =  "Here is a list of available commands:\n"
        "\tinit:\tInitialize the project.\n"
        "\tbuild:\tBuilds the project.\n"
        "\tadd:\tAdds a file to the project.\n" 
        "\taddc:\tAdds a new class to the project.\n"
        "\tclean:\tCleans the project.\n";


        Logger::log(msg);
    }
}
