#include "svg_renderer.hpp"

#include <utility>

#include <algorithm>
#include <filesystem>
#include <fstream>
#include <iomanip>
#include <sstream>

namespace engine::rendering {

namespace {

std::string toColor(math::Color color)
{
    std::ostringstream os;
    os << "rgba("
       << std::clamp(color.r, 0.0f, 1.0f) << ","
       << std::clamp(color.g, 0.0f, 1.0f) << ","
       << std::clamp(color.b, 0.0f, 1.0f) << ","
       << std::clamp(color.a, 0.0f, 1.0f) << ")";
    return os.str();
}

} // namespace

void SvgRenderer::clear()
{
    lines_.clear();
    points_.clear();
    labels_.clear();
}

void SvgRenderer::drawPoint(math::Vector2 position, math::Color color)
{
    points_.push_back({position, color});
}

void SvgRenderer::drawLine(math::Vector2 from, math::Vector2 to, math::Color color)
{
    lines_.push_back({from, to, color});
}

void SvgRenderer::drawLabel(math::Vector2 position, std::string text, math::Color color)
{
    labels_.push_back({position, std::move(text), color});
}

void SvgRenderer::present()
{
    const auto basePath = std::filesystem::path("outputs") / "svg" / experimentName_;
    std::filesystem::create_directories(basePath);
    const auto filePath = basePath / "latest.svg";

    std::ofstream output(filePath);
    if (!output.is_open()) {
        return;
    }

    output << "<svg xmlns=\"http://www.w3.org/2000/svg\" viewBox=\"-1 -1 2 2\">\n";
    output << "  <rect x=\"-1\" y=\"-1\" width=\"2\" height=\"2\" fill=\"#afb997\" />\n";

    for (const auto& line : lines_) {
        output << "  <line x1=\"" << line.from.x << "\" y1=\"" << -line.from.y << "\" "
               << "x2=\"" << line.to.x << "\" y2=\"" << -line.to.y << "\" "
               << "stroke=\"" << toColor(line.color) << "\" stroke-width=\"0.01\" />\n";
    }

    for (const auto& point : points_) {
        output << "  <circle cx=\"" << point.position.x << "\" cy=\"" << -point.position.y << "\" "
               << "r=\"0.02\" fill=\"" << toColor(point.color) << "\" />\n";
    }

    for (const auto& label : labels_) {
        output << "  <text x=\"" << label.position.x << "\" y=\"" << -label.position.y << "\" "
               << "fill=\"" << toColor(label.color) << "\" font-size=\"0.05\" font-family=\"monospace\" "
               << "text-anchor=\"start\" dominant-baseline=\"text-before-edge\">"
               << label.text << "</text>\n";
    }

    output << "</svg>\n";

    lines_.clear();
    points_.clear();
    labels_.clear();
}

void SvgRenderer::setExperimentName(std::string name)
{
    if (!name.empty()) {
        experimentName_ = std::move(name);
    }
}

} // namespace engine::rendering
