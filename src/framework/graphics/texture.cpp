#include "texture.h"

#include <stb/stb_image.h>

namespace Teal {
    Texture::Texture(std::string imagePath) {
        _data = stbi_load(imagePath.c_str(), 0, 0, 0, 0);
    }

    Texture::~Texture() {
        stbi_image_free(_data);
    }

    unsigned char Texture::data() const { return *_data; }
}