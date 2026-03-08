#pragma once

#include <string>

#include "math/color.hpp"
#include "math/vector2.hpp"

namespace engine::rendering {

class Renderer {
public:
    virtual ~Renderer() = default;

    virtual void clear() = 0;
    virtual void drawPoint(math::Vector2 position, math::Color color) = 0;
    virtual void drawLine(math::Vector2 from, math::Vector2 to, math::Color color) = 0;
    virtual void drawLabel(math::Vector2 position, std::string text, math::Color color) = 0;
    virtual void present() = 0;
};

} // namespace engine::rendering
