#pragma once

#include "framework/graphics/vertices/vertex.h"

#include <memory>

namespace Teal {
    class BatchItem {
        public:
            /// @brief Constructor for the batchItem
            BatchItem();
            /// @brief Top left vertex
            /// @return Vertex object
            Vertex TL() const;
            /// @brief Top right vertex
            /// @return Vertex object
            Vertex TR() const;
            /// @brief Bottom left vertex
            /// @return Vertex object
            Vertex BL() const;
            /// @brief Bottom right vertex
            /// @return Vertex object
            Vertex BR() const;
            /// @brief Set the batch item values
            /// @param x X coordinate
            /// @param y Y coordinate 
            /// @param dx X distance to origin
            /// @param dy Y distance to origin
            /// @param w Width of the sprite
            /// @param h Height of the sprite
            /// @param sin sin of angle in rad
            /// @param cos cos of andle in rad
            /// @param color Color of the sprite
            /// @param texCoordsTL Texture coordinates at the top left
            /// @param texCoordsBR Texuture coordinates at the bottom right
            /// @param depth Depth of the sprite
            void set(float x, float y, float dx, float dy, float w, float h, float sin, float cos, Color color, glm::vec2 texCoordsTL, glm::vec2 texCoordsBR, float depth);
            /// @brief Set the batch item values
            /// @param x X coordinate
            /// @param y Y coordinate 
            /// @param w Width of the sprite
            /// @param h Height of the sprite
            /// @param color Color of the sprite
            /// @param texCoordsTL Texture coordinates at the top left
            /// @param texCoordsBR Texuture coordinates at the bottom right
            /// @param depth Depth of the sprite
            void set(float x, float y, float w, float h, Color color, glm::vec2 texCoordsTL, glm::vec2 texCoordsBR, float depth);

        private:
            /// @brief Top left vertex
            std::unique_ptr<Vertex> _TL;
            /// @brief Top right vertex
            std::unique_ptr<Vertex> _TR;
            /// @brief Bottom left vertex
            std::unique_ptr<Vertex> _BL;
            /// @brief Bottom right vertex
            std::unique_ptr<Vertex> _BR;
    };
}