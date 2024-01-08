#pragma once

#include <string>

namespace Teal {
    /// @brief 2D texture representing an image
    class Texture {
        public:
            /// @brief Constructor for a Texture
            Texture(std::string imagePath);
            /// @brief Destructor for a Texture
            ~Texture();
            /// @brief Get the texture data
            /// @return Texture2D data
            unsigned char data() const;

        private:
            unsigned char *_data;
    };
}