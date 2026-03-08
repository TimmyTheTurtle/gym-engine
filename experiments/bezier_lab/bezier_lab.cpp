#include "bezier_lab.hpp"

#include "engine/math/color.hpp"
#include "engine/math/vector2.hpp"
#include "engine/rendering/renderer.hpp"

#include <array>
#include <memory>

namespace experiments {

namespace {

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
        const engine::math::Color pointColor{1.0f, 0.6f, 0.1f, 1.0f};

        auto previous = evaluateBezier(controlPoints_, 0.0f);
        constexpr int segments = 12;
        for (int i = 1; i <= segments; ++i) {
            const float t = static_cast<float>(i) / segments;
            const auto next = evaluateBezier(controlPoints_, t);
            renderer.drawLine(previous, next, curveColor);
            previous = next;
        }

        renderer.drawPoint(evaluateBezier(controlPoints_, progress_), pointColor);
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
