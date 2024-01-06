#include "spriteBatcher.h"

namespace Teal {
    SpriteBatcher::SpriteBatcher(std::shared_ptr<GraphicsDevice> graphicsDevice) {
        _graphicsDevice = graphicsDevice;
        items = new BatchItem[initialBatchSize];
    }

    SpriteBatcher::~SpriteBatcher() {
        delete items;
    }
}