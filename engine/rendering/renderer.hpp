#pragma once

#include "math/color.hpp"
#include "math/vector2.hpp"

#include <vector>

namespace engine::rendering {

class Renderer {
public:
    void clear();
    void drawPoint(math::Vector2 position, math::Color color);
    void drawLine(math::Vector2 from, math::Vector2 to, math::Color color);
    void present();

private:
    struct Line {
        math::Vector2 from;
        math::Vector2 to;
        math::Color color;
    };

    struct Point {
        math::Vector2 position;
        math::Color color;
    };

    std::vector<Line> lines_;
    std::vector<Point> points_;
};

} // namespace engine::rendering
