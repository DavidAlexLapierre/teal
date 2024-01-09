#pragma once

#include "framework/core/game.h"
#include "framework/components/sprite.h"

namespace Teal::Api {
    /// @brief Draw method for sprites
    void draw(Sprite sprite) {
        Game::renderer()->draw(sprite);
    }
}