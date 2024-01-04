#pragma once

#include "framework/data/color.h"

#include <glm/glm.hpp>
#include <memory>

namespace Teal {
    /// @brief Object representing a vertex of a mesh
    class Vertex {
        public:
            /// @brief Default constructor of the vertex
            Vertex();
            /// @brief Constructor of the vertex with a position
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
            std::shared_ptr<Color> color;
            /// @brief Position of the vertex
            std::shared_ptr<glm::vec3> position;
            /// @brief Texture coordinates of the vertex
            std::shared_ptr<glm::vec2> texCoords;
    };
}