#include "help.h"

namespace Teal {
    const char* HelpCmd::HELP_MSG = "Here is a list of available commands:\n"
        "\tinit:\tInitialize the project.\n"
        "\tbuild:\tBuilds the project.\n"
        "\tadd:\tAdds a file to the project.\n" 
        "\taddc:\tAdds a new class to the project.\n"
        "\tclean:\tCleans the project.\n";

    void HelpCmd::LogHelp() {
        Logger::log(HelpCmd::HELP_MSG);
    }
}
