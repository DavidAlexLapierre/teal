#include "spriteBatcher.h"

namespace Teal {
    SpriteBatcher::SpriteBatcher(std::shared_ptr<GraphicsDevice> graphicsDevice) {
        _graphicsDevice = graphicsDevice;
        items = new BatchItem[initialBatchSize];
    }

    void SpriteBatcher::ensureArrayCapacity(int size) {
        auto neededCapacity = 6 * size;
        auto indexLength = sizeof(index) / sizeof(short);
        if (index != nullptr && neededCapacity <= indexLength) {
            return;
        }

        auto newIndex = new short[6 * size];
        int start = 0;
        if (index != nullptr) {
            for (int i = 0; i < indexLength; i++) {
                newIndex[i] = index[i];
                start = indexLength / 6;
            }
        }
        // Using a fixed block to ensure the pointer remains fixed during the loop
        for (std::ptrdiff_t i = start; i < size; ++i) {
            // Calculate the index offset for vertex indices
            std::ptrdiff_t offset = i * 4;

            /*
            *  TL    TR
            *   0----1 0,1,2,3 = index offsets for vertex indices
            *   |   /| TL,TR,BL,BR are vertex references in SpriteBatchItem.
            *   |  / |
            *   | /  |
            *   |/   |
            *   2----3
            *  BL    BR
            */

            // Triangle 1
            newIndex[offset + 0] = static_cast<short>(offset);
            newIndex[offset + 1] = static_cast<short>(offset + 1);
            newIndex[offset + 2] = static_cast<short>(offset + 2);

            // Triangle 2
            newIndex[offset + 3] = static_cast<short>(offset + 1);
            newIndex[offset + 4] = static_cast<short>(offset + 3);
            newIndex[offset + 5] = static_cast<short>(offset + 2);
        }

        // Assign the newIndex pointer to _index
        index = newIndex;
    }

    SpriteBatcher::~SpriteBatcher() {
        delete items;
    }
}