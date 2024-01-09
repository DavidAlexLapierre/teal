#include "renderer.h"

namespace Teal {
    Renderer::Renderer(std::shared_ptr<GraphicsDevice> graphicsDevice) {
        _graphicsDevice = graphicsDevice;
        _batcher = std::make_unique<SpriteBatcher>(_graphicsDevice);
    }

    void Renderer::draw(Sprite sprite) {
        
    }
}