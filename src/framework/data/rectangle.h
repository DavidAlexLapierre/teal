#pragma once

namespace Teal {
    /// @brief Rectangle object
    struct Rectangle {
        /// @brief X coordinate
        int x;
        /// @brief Y coordinate
        int y;
        /// @brief Width of the rectangle
        int w;
        /// @brief Height of the rectangle
        int h;
        /// @brief Default constructor for a rectangle
        Rectangle();
        /// @brief Constructor for a rectangle
        /// @param _x X coordinate
        /// @param _y Y Coordinate
        /// @param _w Width of the rectangle
        /// @param _h Height of the rectangle
        Rectangle(int _x, int _y, int _w, int _h) {
            x = _x;
            y = _y;
            w = _w;
            h = _h;
        }
    };
}