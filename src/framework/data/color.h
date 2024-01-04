#pragma once

#include <cstdint>

namespace Teal {
    struct Color {
        uint8_t r;
        uint8_t g;
        uint8_t b;
        uint8_t a = 255;
        Color(uint8_t _r, uint8_t _g, uint8_t _b) {
            r = _r;
            g = _g;
            b = _b;
        }
        Color(uint8_t _r, uint8_t _g, uint8_t _b, uint8_t _a) {
            r = _r;
            g = _g;
            b = _b;
            a = _a;
        }
        Color() {
            r = 0;
            g = 0;
            b = 0;
            a = 255;
        }
    };
}