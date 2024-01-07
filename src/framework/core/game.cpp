#include "game.h"

#include <GLFW/glfw3.h>

namespace Teal {
    std::shared_ptr<GraphicsDevice> Game::_graphicsDevice = std::make_shared<GraphicsDevice>();
    std::shared_ptr<DisplayManager> Game::_displayManager = std::make_shared<DisplayManager>(Game::_graphicsDevice);
    std::shared_ptr<SceneManager> Game::_sceneManager = std::make_shared<SceneManager>();
    std::shared_ptr<SceneManager> Game::sceneManager() {
        return _sceneManager;
    }
    std::shared_ptr<Renderer> Game::_renderer = std::make_shared<Renderer>(Game::_graphicsDevice);
    std::shared_ptr<Renderer> Game::renderer() {
        return _renderer;
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