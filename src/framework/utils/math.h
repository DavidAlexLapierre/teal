#pragma once

#ifndef M_PI
    #define M_PI 3.14159265358979323846
#endif

namespace Teal {
    /// @brief Transforms a degree value to a radian value
    /// @param degrees Angle in degrees
    /// @return Angle in radian
    float degToRad(float angle) {
        return angle * (M_PI / 180);
    }
}