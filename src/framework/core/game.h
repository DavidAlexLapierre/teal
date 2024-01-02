#pragma once

#include "framework/interfaces/IDisposable.h"
#include "framework/managers/sceneManager.h"
#include "framework/managers/displayManager.h"

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
            /// @brief Initialize the game and its classes
            void init();

        protected:
            /// @brief Function used to register the different scenes
            virtual void initScenes() = 0;
            std::shared_ptr<DisplayManager> _displayManager;
            std::shared_ptr<SceneManager> _sceneManager;
    };
}