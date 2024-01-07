#include "renderer.h"

namespace Teal {
    Renderer::Renderer(std::shared_ptr<GraphicsDevice> graphicsDevice) {
        _graphicsDevice = graphicsDevice;
    }
}