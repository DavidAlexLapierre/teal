#include "cmdParser.h"
#include "cmd/cmd.h"
#include <memory>

namespace Teal {
    CmdParser::CmdParser() {
        cmds = std::make_unique<std::unordered_map<std::string, Cmd>>();
    }

    CmdParser::~CmdParser() {
    }
}
