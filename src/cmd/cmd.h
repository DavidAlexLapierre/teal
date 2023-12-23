#pragma once

#include <string>

namespace Teal {
    class Cmd {
        public:
            const std::string getType() { return cmdType; }

        protected:
            std::string cmdType;
    };
}
