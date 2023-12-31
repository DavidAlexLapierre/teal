#include "displayManager.h"

namespace FW::Core {
    DisplayManager::DisplayManager(std::shared_ptr<Graphics::GraphicDevice> graphicsDevice) {
        _graphicsDevice = graphicsDevice;
        initWindow();
    }

    GLFWwindow* DisplayManager::getWindow() const {
        return window;
    }

    int DisplayManager::initWindow() {
        if (!glfwInit()) {
            return 0;
        }

        window = glfwCreateWindow(640, 480, "Teal", NULL, NULL);

        if (!window) {
            terminate();
        }

        GLFWmonitor* monitor = glfwGetPrimaryMonitor();

        if (!monitor) {
            terminate();
        }

        const GLFWvidmode* mode = glfwGetVideoMode(monitor);
        if (!mode) {
            terminate();
        }

        int xPos = (mode->width - 640) / 2;
        int yPos = (mode->height - 480) / 2;

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