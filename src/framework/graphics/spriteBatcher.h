#pragma once

#include "graphicsDevice.h"

#include <memory>

namespace Teal {
    class SpriteBatcher {
        public:
            /// @brief Constructor of the sprite batcher
            /// @param graphicsDevice Reference to the graphics device used by the project
            SpriteBatcher(std::shared_ptr<GraphicsDevice> graphicsDevice);

        private:
            /// @brief Reference to the graphics device used by the project
            std::shared_ptr<GraphicsDevice> _graphicDevice;
    };
}