#include "bezier_lab.hpp"

#include "engine/math/color.hpp"
#include "engine/math/vector2.hpp"
#include "engine/rendering/renderer.hpp"

#include <array>
#include <cstddef>
#include <iomanip>
#include <memory>
#include <sstream>
#include <string>

namespace experiments {

namespace {

// Keeping control points packed in a small array lets SIMD or GPU loaders read them as
// a matrix. The repeated lerps below map directly to the Bernstein basis, which is just
// a set of matrix weights applied to the 4x2 control-point matrix so we can push more
// work through vectorized multiply-adds or simple kernels.

engine::math::Vector2 evaluateBezier(const std::array<engine::math::Vector2, 4>& controlPoints, float t)
{
    const auto& [p0, p1, p2, p3] = controlPoints;
    const auto a = engine::math::lerp(p0, p1, t);
    const auto b = engine::math::lerp(p1, p2, t);
    const auto c = engine::math::lerp(p2, p3, t);

    const auto d = engine::math::lerp(a, b, t);
    const auto e = engine::math::lerp(b, c, t);
    return engine::math::lerp(d, e, t);
}

struct BezierLerpStages {
    std::array<engine::math::Vector2, 3> first;
    std::array<engine::math::Vector2, 2> second;
    engine::math::Vector2 third;
};

BezierLerpStages evaluateBezierLerpStages(const std::array<engine::math::Vector2, 4>& controlPoints, float t)
{
    const auto& [p0, p1, p2, p3] = controlPoints;
    const auto a = engine::math::lerp(p0, p1, t);
    const auto b = engine::math::lerp(p1, p2, t);
    const auto c = engine::math::lerp(p2, p3, t);

    const auto d = engine::math::lerp(a, b, t);
    const auto e = engine::math::lerp(b, c, t);
    const auto f = engine::math::lerp(d, e, t);

    return {{{a, b, c}}, {{d, e}}, f};
}

std::string formatControlPointLabel(std::size_t index, const engine::math::Vector2& point)
{
    std::ostringstream os;
    os << "P" << index << ": (" << std::fixed << std::setprecision(2) << point.x << ", " << point.y << ")";
    return os.str();
}

} // namespace

class BezierLab : public engine::core::Experiment {
public:
    BezierLab()
        : Experiment("bezier_lab")
    {
        controlPoints_[0] = {-1.0f, -0.2f};
        controlPoints_[1] = {-0.3f, 1.0f};
        controlPoints_[2] = {0.3f, -0.7f};
        controlPoints_[3] = {1.0f, 0.4f};
    }

    void update(float dt) override
    {
        progress_ += dt * animationSpeed_;
        if (progress_ > 1.0f) {
            progress_ -= 1.0f;
        }
        advance(dt);
    }

    void render(engine::rendering::Renderer& renderer) override
    {
        const engine::math::Color curveColor{0.2f, 0.7f, 1.0f, 1.0f};
        const engine::math::Color controlPointColor{1.0f, 0.8f, 0.2f, 1.0f};
        const engine::math::Color progressPointColor{1.0f, 0.6f, 0.1f, 1.0f};
        const engine::math::Color controlLineColor{0.8f, 0.8f, 0.8f, 0.6f};
        const engine::math::Color stageLineColor{0.25f, 0.85f, 0.6f, 0.9f};
        const engine::math::Color crossLineColor{0.95f, 0.4f, 0.5f, 0.95f};
        const engine::math::Color stagePointColor{0.9f, 0.9f, 0.4f, 1.0f};
        const engine::math::Color secondStagePointColor{0.3f, 0.9f, 0.8f, 1.0f};
        const engine::math::Color labelColor{0.05f, 0.05f, 0.05f, 1.0f};
        const std::array<engine::math::Vector2, 4> labelOffsets = {
            engine::math::Vector2{0.05f, 0.05f},
            engine::math::Vector2{0.05f, -0.05f},
            engine::math::Vector2{-0.12f, 0.06f},
            engine::math::Vector2{-0.1f, -0.05f},
        };

        auto previous = evaluateBezier(controlPoints_, 0.0f);
        constexpr int segments = 12;
        for (int i = 1; i <= segments; ++i) {
            const float t = static_cast<float>(i) / segments;
            const auto next = evaluateBezier(controlPoints_, t);
            // This loop is a micro-kernel; if we needed more segments, we could precompute
            // the Bernstein coefficients once and execute all the lerps in a SIMD-friendly
            // bulk operation.
            renderer.drawLine(previous, next, curveColor);
            previous = next;
        }

        const auto lerpStages = evaluateBezierLerpStages(controlPoints_, progress_);

        for (size_t i = 0; i + 1 < controlPoints_.size(); ++i) {
            renderer.drawLine(controlPoints_[i], controlPoints_[i + 1], controlLineColor);
        }
        renderer.drawLine(lerpStages.first[0], lerpStages.first[1], stageLineColor);
        renderer.drawLine(lerpStages.first[1], lerpStages.first[2], stageLineColor);
        renderer.drawLine(lerpStages.second[0], lerpStages.second[1], crossLineColor);

        // Drawing the intermediate stages highlights the data dependencies; those same
        // points are candidates for shared registers when we move this computation
        // into a threaded or GPU-backed pipeline.

        for (const auto& point : lerpStages.first) {
            renderer.drawPoint(point, stagePointColor);
        }
        for (const auto& point : lerpStages.second) {
            renderer.drawPoint(point, secondStagePointColor);
        }

        for (size_t i = 0; i < controlPoints_.size(); ++i) {
            renderer.drawPoint(controlPoints_[i], controlPointColor);
            const auto labelPosition = controlPoints_[i] + labelOffsets[i];
            renderer.drawLine(controlPoints_[i], labelPosition, labelColor);
            renderer.drawLabel(labelPosition, formatControlPointLabel(i, controlPoints_[i]), labelColor);
        }

        renderer.drawPoint(lerpStages.third, progressPointColor);
    }

private:
    std::array<engine::math::Vector2, 4> controlPoints_;
    float progress_{0.0f};
    const float animationSpeed_{0.3f};
};

std::unique_ptr<engine::core::Experiment> createBezierLab()
{
    return std::make_unique<BezierLab>();
}

} // namespace experiments
