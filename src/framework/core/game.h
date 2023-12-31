#pragma once

#include "displayManager.h"

#include <memory>

namespace FW::Core {
    class Game {
        public:
            Game();
            ~Game();
            void run();
        
        private:
            std::shared_ptr<DisplayManager> _displayManager;
    };
}