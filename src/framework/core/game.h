#pragma once

#include "framework/interfaces/IDisposable.h"
#include "framework/managers/sceneManager.h"
#include "framework/managers/displayManager.h"
#include "framework/graphics/renderer.h"

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
            /// @brief Get the instance of the renderer
            /// @return Renderer used by the project
            static std::shared_ptr<Renderer> renderer();

        protected:
            /// @brief Function used to register the different scenes
            virtual void initScenes() = 0;
            /// @brief Graphics device for the project
            static std::shared_ptr<GraphicsDevice> _graphicsDevice;
            /// @brief Display manager for the project
            static std::shared_ptr<DisplayManager> _displayManager;
            /// @brief Scene manager for the project
            static std::shared_ptr<SceneManager> _sceneManager;
            /// @brief Renderer for the project
            static std::shared_ptr<Renderer> _renderer;
    };
}