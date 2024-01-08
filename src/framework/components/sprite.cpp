#include "sprite.h"

namespace Teal {
    Sprite::Sprite(Rectangle *frames, float animationSpeed) {
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