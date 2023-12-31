#pragma once

#include "framework/graphics/graphicDevice.h"
#include <memory>

namespace FW::Core {
    class DisplayManager {
        public:
            DisplayManager(std::shared_ptr<Graphics::GraphicDevice> graphicsDevice);
            ~DisplayManager();
        
        private:
            std::shared_ptr<Graphics::GraphicDevice> _graphicsDevice;
    };
}