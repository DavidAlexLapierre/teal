#pragma once

#include "framework/core/game.h"
#include "framework/data/uuid.h"
#include <iostream>

namespace Teal {
    /// @brief Helper function used to create an entity
    /// @param x X position within the scene
    /// @param y Y position within the scene
    /// @param entity Entity to create
    void createEntity(int x, int y, std::shared_ptr<Entity> entity) {
        if (entity != nullptr) {
            entity->setPosition(x, y);
            Game::sceneManager()->createEntity(entity);
        }
    }

    /// @brief Helper function used to delete an entity
    /// @param id ID of the entity
    void deleteEntity(UUID id) {
        if (id.toString() != "") {
            Game::sceneManager()->deleteEntity(id);
        }
    }
}