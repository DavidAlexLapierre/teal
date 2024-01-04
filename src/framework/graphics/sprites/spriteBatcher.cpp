#include "spriteBatcher.h"

namespace Teal {
    SpriteBatcher::SpriteBatcher() {
        items = new BatchItem[initialBatchSize];
    }

    SpriteBatcher::~SpriteBatcher() {
        delete items;
    }
}