#pragma once

#include "framework/interfaces/IDisposable.h"
#include "managers/displayManager.h"
#include "managers/sceneManager.h"

#include <memory>

namespace Teal {
    class Game : public IDisposable {
        public:
            Game();
            ~Game();
            void run();
            void dispose();

        private:
            std::shared_ptr<DisplayManager> _displayManager;
            std::shared_ptr<SceneManager> _sceneManager;
    };
}