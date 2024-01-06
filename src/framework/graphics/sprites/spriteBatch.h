#pragma once

#include "spriteBatcher.h"
#include "framework/graphics/graphicsDevice.h"

#include <memory>

namespace Teal {
    /// @brief Responsible for batching sprites and sending the data
    /// @brief back to the GPU in order to improve rendering performances
    class SpriteBatch {
        public:
            /// @brief Constructor of the sprite batcher
            /// @param graphicsDevice Reference to the graphics device used by the project
            SpriteBatch(std::shared_ptr<GraphicsDevice> graphicsDevice);

        private:
            /// @brief Batcher responsible to queue sprites to the GPU
            std::unique_ptr<SpriteBatcher> _batcher;
            /// @brief Reference to the graphics device used by the project
            std::shared_ptr<GraphicsDevice> _graphicDevice;
    };
}