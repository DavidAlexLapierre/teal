#include "texture.h"

namespace Teal {
    Texture::Texture(std::string imagePath) {

    }

    Texture::~Texture() {
        delete _data;
    }

    unsigned char Texture::data() const { return *_data; }
}