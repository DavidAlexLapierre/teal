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
            /// @brief Get the instance of the scene manager
            /// @return SceneManager used by the project
            static std::shared_ptr<SceneManager> sceneManager();

        protected:
            /// @brief Function used to register the different scenes
            virtual void initScenes() = 0;
            static std::shared_ptr<DisplayManager> _displayManager;
            static std::shared_ptr<SceneManager> _sceneManager;
    };
}