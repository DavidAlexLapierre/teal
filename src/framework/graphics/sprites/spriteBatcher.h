#pragma once

#include "batchItem.h"
#include "framework/graphics/graphicsDevice.h"

#include <limits>
#include <memory>

namespace Teal {
    class SpriteBatcher {
        public:
            /// @brief Constructor for the SpriteBatcher
            SpriteBatcher(std::shared_ptr<GraphicsDevice> graphicsDevice);
            /// @brief Destructor for the SpriteBatcher
            ~SpriteBatcher();
            /// @brief Helper function to create a batch item
            /// @return New batch item
            BatchItem createBatchItem();

        private:
            const int initialBatchSize = 256;
            const int initialVertexArraySize = 256;
            const int maxBatchSize = std::numeric_limits<short>::max() / 6;
            std::shared_ptr<GraphicsDevice> _graphicsDevice;
            int batchItemCount;
            BatchItem *items;
            /// @brief Make sure the batch can handle the amount of sprites
            /// @param size Batch size
            void ensureArrayCapacity(int size);
            short *index;
    };
}