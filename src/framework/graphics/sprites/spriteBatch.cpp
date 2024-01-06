#include "spriteBatch.h"

namespace Teal {
    SpriteBatch::SpriteBatch(std::shared_ptr<GraphicsDevice> graphicsDevice) {
        _graphicDevice = graphicsDevice;
        _batcher = std::make_unique<SpriteBatcher>(_graphicDevice);
    }
}