#include "vertex.h"

namespace Teal {
    Vertex::Vertex(glm::vec3 position) {
        _position = position;
    }

    Vertex::Vertex(glm::vec3 position, Color color) {
        _position = position;
        _color = color;
    }

    Vertex::Vertex(glm::vec3 position, glm::vec2 texCoords) {
        _position = position;
        _texCoords = texCoords;
    }

    Vertex::Vertex(glm::vec3 position, Color color, glm::vec2 texCoords) {
        _position = position;
        _color = color;
        _texCoords = texCoords;
    }

    Color Vertex::color() const {
        return _color;
    }

    glm::vec3 Vertex::position() const {
        return _position;
    }

    glm::vec2 Vertex::texCoords() const {
        return _texCoords;
    }
}