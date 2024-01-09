#pragma once

#include "framework/graphics/graphicsDevice.h"
#include "framework/graphics/sprites/spriteBatcher.h"
#include "framework/components/sprite.h"

#include <memory>

namespace Teal {
    class Renderer {
        public:
            /// @brief Constructor for the Renderer
            /// @param graphicsDevice Reference to the graphics device used by the project
            Renderer(std::shared_ptr<GraphicsDevice> graphicsDevice);
            /// @brief Draw a sprite
            /// @param sprite Sprite data
            void draw(Sprite sprite);

        private:
            /// @brief Reference to the graphics device used by the project
            std::shared_ptr<GraphicsDevice> _graphicsDevice;
            /// @brief Sprite batcher for 2D games
            std::unique_ptr<SpriteBatcher> _batcher;
    };
}