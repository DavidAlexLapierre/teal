#pragma once

#include "graphicsDevice.h"

#include <memory>

namespace Teal {
    class SpriteBatcher {
        public:
            SpriteBatcher(std::shared_ptr<GraphicsDevice> graphicsDevice);

        private:
            std::shared_ptr<GraphicsDevice> _graphicDevice;
    };
}