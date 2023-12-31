#pragma once

#include "framework/graphics/graphicDevice.h"

#include <memory>

namespace Framework::Core {
    class Game {
        public:
            Game();
            ~Game();
            void run();
        
        private:
            std::shared_ptr<Graphics::GraphgicDevice> _graphicsDevice;
    };
}