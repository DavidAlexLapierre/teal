#pragma once

#include "framework/core/game.h"

namespace Teal::Api {
    /// @brief Draw method for sprites
    void draw() {
        Game::renderer();
    }
}