#pragma once

#include "../utils/logger.h"
#include "cmd.h"

namespace Teal {
    class HelpCmd : public Cmd {
        public:
            HelpCmd() : Cmd() {
                cmdType = "help";
            }
            void LogHelp();
        private:
            static const char* HELP_MSG;
    };
}
