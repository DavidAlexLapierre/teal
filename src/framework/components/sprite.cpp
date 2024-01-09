#include "sprite.h"

namespace Teal {
    Sprite::Sprite(std::shared_ptr<Texture> texture, Rectangle *frames, float animationSpeed) {
        _texture = texture;
        _frames = frames;
        _animationSpeed = animationSpeed;
    }

    float Sprite::animationSpeed() const { return _animationSpeed; }
    bool Sprite::visible() const { return _visible; }
    void Sprite::setAnimationSpeed(float animationSpeed) { _animationSpeed = animationSpeed; }

    Sprite::~Sprite() {
        delete _frames;
    }
}