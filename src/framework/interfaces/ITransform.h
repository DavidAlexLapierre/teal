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
            /// @brief Modify the pitch value
            /// @param pitch Angle in degrees to rotate X axis
            void rotatePitch(float pitch);
            /// @brief Modify the yaw value
            /// @param yaw Angle in degrees to rotate Y axis
            void rotateYaw(float yaw);
            /// @brief Modify the roll value
            /// @param roll Angle in degrees to rotate Z axis
            void rotateRoll(float roll);
            /// @brief Modify the rotation values
            /// @param pitch Angle in degrees to rotate on the X axis
            /// @param yaw Angle in degrees to rotate on the Y axis
            /// @param roll Angle in degrees to rotate on the Z axis
            void rotate(float pitch, float yaw, float roll);

        protected:
            glm::vec3 _position;
            glm::vec3 _rotation;
            glm::vec3 _scale;
    };
}