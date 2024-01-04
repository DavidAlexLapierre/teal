#include "ITransform.h"

#include "framework/utils/math.h"

namespace Teal {
    glm::vec3 ITransform::position() const {
        return _position;
    }

    glm::vec3 ITransform::rotation() const {
        return _rotation;
    }

    glm::vec3 ITransform::scale() const {
        return _scale;
    }

    void ITransform::setScale(float scale) {
        _scale = glm::vec3(scale);
    }

    void ITransform::setScale(float scaleX, float scaleY, float scaleZ) {
        _scale = glm::vec3(scaleX, scaleY, scaleZ);
    }

    void ITransform::increaseScale(float scale) {
        _scale.x += scale;
        _scale.y += scale;
        _scale.z += scale;
    }

    void ITransform::increaseScale(float scaleX, float scaleY, float scaleZ) {
        _scale.x += scaleX;
        _scale.y += scaleY;
        _scale.z += scaleZ;
    }

    void ITransform::rotatePitch(float pitch) {
        _rotation.x += degToRad(pitch);
    }

    void ITransform::rotateYaw(float yaw) {
        _rotation.y += degToRad(yaw);
    }
    
    void ITransform::rotateRoll(float roll) {
        _rotation.z += degToRad(roll);
    }

    void ITransform::rotate(float pitch, float yaw, float roll) {
        _rotation.x += degToRad(pitch);
        _rotation.y += degToRad(yaw);
        _rotation.z += degToRad(roll);
    }
}