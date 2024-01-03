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

    void SceneManager::createEntity(std::shared_ptr<Entity> entity) {
        if (_currentScene != nullptr) {
            _currentScene->createEntity(entity);
        }
    }

    void SceneManager::deleteEntity(UUID id) {
        if (id.toString() != "" && _currentScene != nullptr) {
            _currentScene->deleteEntity(id);
        }
    }

    void SceneManager::dispose() {
        
    }
}