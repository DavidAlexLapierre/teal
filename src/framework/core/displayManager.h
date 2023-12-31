#pragma once

#include "framework/graphics/graphicDevice.h"

#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <memory>

namespace FW::Core {
    class DisplayManager {
        public:
            DisplayManager(std::shared_ptr<Graphics::GraphicDevice> graphicsDevice);
            ~DisplayManager();
            GLFWwindow *getWindow() const;
            void terminate();

        private:
            int initWindow();
            GLFWwindow *window;
            std::shared_ptr<Graphics::GraphicDevice> _graphicsDevice;
    };
}