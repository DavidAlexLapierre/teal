#include "spriteBatcher.h"

namespace Teal {
    SpriteBatcher::SpriteBatcher(std::shared_ptr<GraphicsDevice> graphicsDevice) {
        _graphicDevice = graphicsDevice;
    }
}