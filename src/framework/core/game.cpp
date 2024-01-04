#include "game.h"

#include <GLFW/glfw3.h>

namespace Teal {

    std::shared_ptr<DisplayManager> Game::_displayManager = std::make_shared<DisplayManager>(
        std::make_shared<GraphicDevice>());

    std::shared_ptr<SceneManager> Game::_sceneManager = std::make_shared<SceneManager>();

    std::shared_ptr<SceneManager> Game::sceneManager() {
        return _sceneManager;
    }

    Game::Game() {
    }

    void Game::init() {
        initScenes();
    }

    void Game::run() {
        while (!glfwWindowShouldClose(_displayManager->getWindow())) {
            glClear(GL_COLOR_BUFFER_BIT);

            _sceneManager->update(0);
            _sceneManager->draw();

            glfwSwapBuffers(_displayManager->getWindow());
            glfwPollEvents();
        }
        dispose();
    }

    void Game::dispose() {
        _displayManager->dispose();
        _sceneManager->dispose();
    }
}