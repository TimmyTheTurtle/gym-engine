#include "parametric_curves.hpp"

#include "engine/math/color.hpp"
#include "engine/math/vector2.hpp"
#include "engine/rendering/renderer.hpp"

#include <cmath>
#include <memory>

namespace experiments {

class ParametricCurves : public engine::core::Experiment {
public:
    ParametricCurves()
        : engine::core::Experiment("parametric_curves")
    {
    }

    void update(float dt) override
    {
        time_ += dt;
        advance(dt);
    }

    void render(engine::rendering::Renderer& renderer) override
    {
        constexpr int segments = 24;
        const float amplitude = 0.6f + std::sin(time_ * 0.6f) * 0.2f;
        const float phase = time_ * 0.7f;
        const engine::math::Color lineColor{0.9f, 0.5f, 0.2f, 1.0f};
        engine::math::Vector2 previous = evaluate(0.0f, amplitude, phase);

        for (int i = 1; i <= segments; ++i) {
            const float t = static_cast<float>(i) / segments;
            const auto next = evaluate(t, amplitude, phase);
            renderer.drawLine(previous, next, lineColor);
            previous = next;
        }

        renderer.drawPoint(evaluate(0.5f, amplitude, phase), {0.2f, 0.7f, 1.0f, 1.0f});
    }

private:
    engine::math::Vector2 evaluate(float t, float amplitude, float phase) const
    {
        const float theta = t * 2.0f * 3.14159f + phase;
        return {std::cos(theta) * amplitude, std::sin(2.0f * theta) * amplitude * 0.6f};
    }

    float time_{0.0f};
};

std::unique_ptr<engine::core::Experiment> createParametricCurves()
{
    return std::make_unique<ParametricCurves>();
}

} // namespace experiments
