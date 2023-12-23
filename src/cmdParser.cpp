#include "cmdParser.h"
#include "cmd/cmd.h"
#include "cmd/help.h"
#include "utils/logger.h"
#include <memory>

namespace Teal {
    CmdParser::CmdParser() {
        cmds = { 
            {"help", HelpCmd()}
        };
    }

    CmdParser::~CmdParser() {
    }


    void CmdParser::parse(const char* cmd) {
        auto it = cmds.find(cmd);
        if (it != cmds.end()) {
            Logger::log("found");
        }
    }
}
