#include "spriteBatch.h"

namespace Teal {
    SpriteBatch::SpriteBatch(std::shared_ptr<GraphicsDevice> graphicsDevice) {
        _graphicDevice = graphicsDevice;
    }
}