#pragma once

#include "spriteBatcher.h"
#include "framework/graphics/graphicsDevice.h"

#include <memory>

namespace Teal {
    class SpriteBatch {
        public:
            /// @brief Constructor of the sprite batcher
            /// @param graphicsDevice Reference to the graphics device used by the project
            SpriteBatch(std::shared_ptr<GraphicsDevice> graphicsDevice);

        private:
            /// @brief Batcher responsible to queue sprites to the gpu
            SpriteBatcher _spriteBatcher;
            /// @brief Reference to the graphics device used by the project
            std::shared_ptr<GraphicsDevice> _graphicDevice;
    };
}