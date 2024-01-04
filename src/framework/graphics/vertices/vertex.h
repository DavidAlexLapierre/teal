#pragma once

#include "framework/data/color.h"

#include <glm/glm.hpp>

namespace Teal {
    /// @brief Object representing a vertex of a mesh
    class Vertex {
        public:
            /// @brief Default constructor of the vertex
            /// @param position Position of the vertex
            Vertex(glm::vec3 position);
            /// @brief Constructor for a vertex with a color
            /// @param position Position of the vertex
            /// @param color Color of the vertex
            Vertex(glm::vec3 position, Color color);
            /// @brief Constructor for a vertex with a texture
            /// @param position Position of the vertex
            /// @param texCoords Texture coordinates of the vertex
            Vertex(glm::vec3 position, glm::vec2 texCoords);
            /// @brief Constructor for a vertex with a color and a texture
            /// @param position Position of the vertex
            /// @param color Color of the vertex
            /// @param texCoords Texture coordinates of the vertex
            Vertex(glm::vec3 position, Color color, glm::vec2 texCoords);
            /// @brief Color of the vertex
            /// @return Color object of the vertex
            Color color() const;
            /// @brief Position of the vertex
            /// @return Position as vector 3
            glm::vec3 position() const;
            /// @brief Texture coordinates of the vertex
            /// @return Texture coordinates as vector 2
            glm::vec2 texCoords() const;

        private:
            /// @brief Color of the vertex
            Color _color;
            /// @brief Position of the vertex
            glm::vec3 _position;
            /// @brief Texture coordinates of the vertex
            glm::vec2 _texCoords;
    };
}