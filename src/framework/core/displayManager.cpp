#include "displayManager.h"

namespace FW::Core {
    DisplayManager::DisplayManager(std::shared_ptr<Graphics::GraphicDevice> graphicsDevice) {
        _graphicsDevice = graphicsDevice;
    }

    DisplayManager::~DisplayManager() {

    }
}