#pragma once

#include "framework/graphics/graphicsDevice.h"

#include <memory>

namespace Teal {
    class Renderer {
        public:
            Renderer(std::shared_ptr<GraphicsDevice> graphicsDevice);

        private:
            std::shared_ptr<GraphicsDevice> _graphicsDevice;
    };
}