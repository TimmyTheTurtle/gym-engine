#include "renderer.hpp"

#include <iomanip>
#include <iostream>
#include <sstream>

namespace engine::rendering {

void Renderer::clear()
{
    lines_.clear();
    points_.clear();
}

void Renderer::drawPoint(math::Vector2 position, math::Color color)
{
    points_.push_back({position, color});
}

void Renderer::drawLine(math::Vector2 from, math::Vector2 to, math::Color color)
{
    lines_.push_back({from, to, color});
}

void Renderer::present()
{
    std::cout << "Renderer drew " << lines_.size() << " line(s) and " << points_.size() << " point(s).\n";
    auto printVec = [](math::Vector2 value) {
        std::ostringstream os;
        os << "(" << std::fixed << std::setprecision(2) << value.x << ", " << value.y << ")";
        return os.str();
    };

    auto printColor = [](math::Color color) {
        std::ostringstream os;
        os << "rgba(" << std::fixed << std::setprecision(2) << color.r << ", " << color.g << ", " << color.b << ", " << color.a << ")";
        return os.str();
    };

    for (const auto& line : lines_) {
        std::cout << "  Line " << printVec(line.from) << " -> " << printVec(line.to) << " @" << printColor(line.color) << "\n";
    }

    for (const auto& point : points_) {
        std::cout << "  Point " << printVec(point.position) << " @" << printColor(point.color) << "\n";
    }

    lines_.clear();
    points_.clear();
}

} // namespace engine::rendering
