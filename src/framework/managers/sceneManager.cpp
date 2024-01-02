#include "sceneManager.h"

namespace Teal {
    SceneManager::SceneManager() {
        _currentScene = nullptr;
    }

    void SceneManager::update(double deltaT) {
        if (_currentScene != nullptr) {
            _currentScene->update(deltaT);
        }
    }

    void SceneManager::draw() {
        if (_currentScene != nullptr) {
            _currentScene->draw();
        }
    }

    void SceneManager::dispose() {
        
    }
}