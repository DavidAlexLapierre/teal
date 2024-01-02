#include "displayManager.h"

namespace Teal {
    DisplayManager::DisplayManager(std::shared_ptr<GraphicDevice> graphicsDevice) {
        _graphicsDevice = graphicsDevice;
        viewport = glm::vec2(1280, 720);
        initWindow();
    }

    glm::vec2 DisplayManager::getViewport() const {
        return viewport;
    }

    GLFWwindow* DisplayManager::getWindow() const {
        return window;
    }

    int DisplayManager::initWindow() {
        if (!glfwInit()) {
            return 0;
        }

        window = glfwCreateWindow(viewport.x, viewport.y, "Teal", NULL, NULL);

        if (!window) {
            dispose();
            return 0;
        }

        GLFWmonitor* monitor = glfwGetPrimaryMonitor();

        if (!monitor) {
            dispose();
            return 0;
        }

        const GLFWvidmode* mode = glfwGetVideoMode(monitor);
        if (!mode) {
            dispose();
            return 0;
        }

        int xPos = (mode->width - viewport.x) / 2;
        int yPos = (mode->height - viewport.y) / 2;

        // Set the window position
        glfwSetWindowPos(window, xPos, yPos);
        glfwMakeContextCurrent(window);
        gladLoadGLLoader((GLADloadproc)glfwGetProcAddress);

        return 1;
    }

    void DisplayManager::dispose() {
        if (window) {
            glfwDestroyWindow(window);
        }
        glfwTerminate();
    }
}