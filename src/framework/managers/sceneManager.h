#pragma once

#include "framework/core/scene.h"
#include "framework/interfaces/IDisposable.h"

#include <memory>
#include <unordered_map>
#include <typeindex>

namespace Teal {
    /// @brief Object used to manage the different scenes and their interactions.
    class SceneManager : public IDisposable {
        public:
            /// @brief Constructor for the SceneManager
            SceneManager();
            /// @brief Update loop for the current scene
            /// @param deltaT
            void update(double deltaT);
            /// @brief Draw loop for the current scene
            void draw();

            /// @brief Register a scene used by the framework
            /// @tparam T Scene type
            /// @param scene Scene object to register
            template <typename T>
            void registerScene(std::shared_ptr<Scene> scene) {
                static_assert(std::is_base_of<Scene, T>::value, "T must be derived of Scene");
                _scenes[typeid(T)] = scene;
                if (_currentScene == nullptr) {
                    setScene<T>();
                }
            }
            void dispose() override;

            /// @brief Set the current scene
            /// @tparam T Scene type to set
            template <typename T>
            void setScene() {
                std::type_index key = typeid(T);
                if (_scenes.find(key) != _scenes.end()) {
                    if (_currentScene != nullptr) _currentScene->dispose();
                    _currentScene = _scenes[key];
                    _currentScene->init();
                }
            }

            /// @brief Register an entity to the current scene
            /// @param entity Entity to create
            void createEntity(int x, int y, std::shared_ptr<Entity> entity);
            /// @brief Delete an entity from the current scene
            /// @param id ID of the entity
            void deleteEntity(UUID id);

        private:
            std::shared_ptr<Scene> _currentScene;
            std::unordered_map<std::type_index, std::shared_ptr<Scene>> _scenes;
    };
}