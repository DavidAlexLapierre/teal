#pragma once

#include "cmd/cmd.h"

#include <unordered_map>
#include <string>
#include <memory>

namespace Teal {
    class CmdParser {
        public:
            CmdParser();
            ~CmdParser();
            void parse(const char* cmd);

        private:
            std::unordered_map<std::string, Teal::Cmd> cmds;
    };
}
