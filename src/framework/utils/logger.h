#pragma once

namespace Teal {
    class Logger {
        public:
            static void log(const char* msg);
            static void err(const char* msg);
            static void warn(const char* msg);
        private:
            const static char* ERROR_COLOR;
            const static char* WARN_COLOR;
            const static char* RESET_COLOR;
            
    };
}
