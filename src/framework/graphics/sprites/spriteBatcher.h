#pragma once

#include "batchItem.h"

#include <limits>

namespace Teal {
    class SpriteBatcher {
        public:
            /// @brief Constructor for the SpriteBatcher
            SpriteBatcher();
            ~SpriteBatcher();
            /// @brief Helper function to create a batch item
            /// @return New batch item
            BatchItem createBatchItem();

        private:
            const int initialBatchSize = 256;
            const int initialVertexArraySize = 256;
            const int maxBatchSize = std::numeric_limits<short>::max() / 6;
            BatchItem *items;
    };
}