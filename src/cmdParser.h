#pragma once

#include <string>
#include <unordered_map>
#include <functional>

namespace Teal {
    class CmdParser {
        public:
            CmdParser();
            int run(const std::string& cmd, int argc, char* argv[]);

        private:
            std::unordered_map<std::string, std::function<void(int, char*[])>> cmds;
    };
}
