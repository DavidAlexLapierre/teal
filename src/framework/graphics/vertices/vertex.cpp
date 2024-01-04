#include "vertex.h"

namespace Teal {
    Vertex::Vertex() {
        
    }
    
    Vertex::Vertex(glm::vec3 _position) {
        position = std::make_shared<glm::vec3>(_position);
    }

    Vertex::Vertex(glm::vec3 _position, Color _color) {
        position = std::make_shared<glm::vec3>(_position);
        color = std::make_shared<Color>(_color);
    }

    Vertex::Vertex(glm::vec3 _position, glm::vec2 _texCoords) {
        position = std::make_shared<glm::vec3>(_position);
        texCoords = std::make_shared<glm::vec2>(_texCoords);
    }

    Vertex::Vertex(glm::vec3 _position, Color _color, glm::vec2 _texCoords) {
        position = std::make_shared<glm::vec3>(_position);
        color = std::make_shared<Color>(_color);
        texCoords = std::make_shared<glm::vec2>(_texCoords);
    }
}