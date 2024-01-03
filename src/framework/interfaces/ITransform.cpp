#include "ITransform.h"

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
}