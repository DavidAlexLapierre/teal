#include "cmdParser.h"
#include "cmd/help.h"

namespace Teal {
    CmdParser::CmdParser() {
        cmds["help"] = executeHelp;
    }

    bool CmdParser::run(const std::string& cmd, int argc, char *argv[]) {
        auto it = cmds.find(cmd);
        if (it != cmds.end()) {
            it->second(argc, argv);
            return 1;
        }

        return 0;
    }
}
