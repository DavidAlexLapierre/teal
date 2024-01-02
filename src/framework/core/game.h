#pragma once

#include "managers/displayManager.h"
#include "managers/sceneManager.h"

#include <memory>

namespace FW {
    class Game {
        public:
            Game();
            ~Game();
            void run();
        
        private:
            std::shared_ptr<DisplayManager> _displayManager;
            std::shared_ptr<SceneManager> _sceneManager;
    };
}