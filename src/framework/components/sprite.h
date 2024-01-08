#pragma once

#include "framework/core/component.h"
#include "framework/data/rectangle.h"
#include "framework/data/color.h"

#include <glm/glm.hpp>

namespace Teal {
    class Sprite : public Component {
        public:
            /// @brief Constructor for the sprite
            /// @param frames Frames for the sprite
            /// @param animationSpeed Animation speed of the sprite
            Sprite(Rectangle *frames, float animationSpeed);
            /// @brief Destructor for the sprite
            ~Sprite();
            /// @brief Get the animation speed for the sprite
            /// @return Animation speed in seconds
            float animationSpeed() const;
            /// @brief Get whether the sprite is currently visible or not
            /// @return Visibility status
            bool visible() const;
            /// @brief Set the animation speed for the sprite
            void setAnimationSpeed(float animationSpeed);

        private:
            /// @brief Flag letting know whether the sprite is visible or not
            bool _visible;
            /// @brief Animation speed of the sprite
            float _animationSpeed;
            /// @brief Different frames for the sprite
            Rectangle *_frames;
    };
}