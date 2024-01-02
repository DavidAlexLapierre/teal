#pragma once

#include "framework/interfaces/IDisposable.h"
#include "managers/displayManager.h"
#include "managers/sceneManager.h"

#include <memory>

namespace Teal {
    class Game : public IDisposable {
        public:
            /// @brief Constructor for the game object
            Game();
            /// @brief Starts the game loop
            void run();
            /// @brief Terminate the game
            void dispose() override;

        private:
            std::shared_ptr<DisplayManager> _displayManager;
            std::shared_ptr<SceneManager> _sceneManager;
    };
}