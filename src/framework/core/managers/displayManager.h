#pragma once

#include "framework/graphics/graphicDevice.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <memory>
#include <glm/glm.hpp>

namespace Teal {
    /// @brief Manager responsible for handling the game window
    class DisplayManager {
        public:
            /// @brief Manager responsible for handling the window
            /// @param graphicsDevice Graphics device object holding graphics card information
            DisplayManager(std::shared_ptr<GraphicDevice> graphicsDevice);
            /// @brief Destructor for the DisplayManager
            ~DisplayManager();
            /// @brief Get the reference to the GLFWwindow object
            /// @return GLFWwindow reference
            GLFWwindow *getWindow() const;
            /// @brief Terminate GLFW and clear memory
            void terminate();
            /// @brief Get the viewport dimension of the window
            /// @return Viewport dimensions of the window
            glm::vec2 getViewport() const;

        private:
            /// @brief Initialize the GLFWwindow
            /// @return Status code
            int initWindow();
            /// @brief GLFWwindow reference
            GLFWwindow *window;
            /// @brief Reference to the graphics device
            std::shared_ptr<GraphicDevice> _graphicsDevice;
            /// @brief Viewport dimensions of the window
            glm::vec2 viewport;
    };
}