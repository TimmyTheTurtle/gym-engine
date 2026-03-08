#pragma once

#include "engine/rendering/renderer.hpp"
#include "math/color.hpp"
#include "math/vector2.hpp"

#include <memory>
#include <string>
#include <vector>

namespace engine::rendering {

class SvgRenderer final : public Renderer {
public:
    void clear() override;
    void drawPoint(math::Vector2 position, math::Color color) override;
    void drawLine(math::Vector2 from, math::Vector2 to, math::Color color) override;
    void drawLabel(math::Vector2 position, std::string text, math::Color color) override;
    void present() override;

    void setExperimentName(std::string name);

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

    struct Label {
        math::Vector2 position;
        std::string text;
        math::Color color;
    };

    std::vector<Line> lines_;
    std::vector<Point> points_;
    std::vector<Label> labels_;
    std::string experimentName_ = "default";
};

} // namespace engine::rendering
