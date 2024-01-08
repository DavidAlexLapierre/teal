#include "texture.h"

#ifndef STB_IMAGE_IMPLEMENTATION
#define STB_IMAGE_IMPLEMENTATION
#endif
#include <stb/stb_image.h>

namespace Teal {
    Texture::Texture(std::string imagePath) {
        _data = stbi_load(imagePath.c_str(), _width, _height, _channels, Texture::RGBA_CHANNELS);
    }

    Texture::~Texture() {
        stbi_image_free(_data);
        delete _width;
        delete _height;
        delete _channels;
    }

    unsigned char Texture::data() const { return *_data; }
}