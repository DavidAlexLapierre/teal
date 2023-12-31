#include "displayManager.h"

namespace FW::Core {
    DisplayManager::DisplayManager(std::shared_ptr<Graphics::GraphicDevice> graphicsDevice) {
        _graphicsDevice = graphicsDevice;
        viewport = glm::vec2(640, 480);
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
            terminate();
            return 0;
        }

        GLFWmonitor* monitor = glfwGetPrimaryMonitor();

        if (!monitor) {
            terminate();
            return 0;
        }

        const GLFWvidmode* mode = glfwGetVideoMode(monitor);
        if (!mode) {
            terminate();
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

    void DisplayManager::terminate() {
        if (window) {
            glfwDestroyWindow(window);
        }
        glfwTerminate();
    }

    DisplayManager::~DisplayManager() {
    }
}