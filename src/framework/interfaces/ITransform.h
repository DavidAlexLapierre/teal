#pragma once

#include <glm/glm.hpp>

namespace Teal {
    class ITransform {
        public:
            /// @brief Position values
            /// @return Position as a vector 3
            glm::vec3 position() const;
            /// @brief Rotation values
            /// @return Rotation as vector 3 in degrees
            glm::vec3 rotation() const;
            /// @brief Scale values
            /// @return Scale as vector 3
            glm::vec3 scale() const;

        protected:
            glm::vec3 _position;
            glm::vec3 _rotation;
            glm::vec3 _scale;
    };
}