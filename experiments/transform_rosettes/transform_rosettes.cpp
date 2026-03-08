#include "transform_rosettes.hpp"

#include "engine/math/color.hpp"
#include "engine/math/vector2.hpp"
#include "engine/rendering/renderer.hpp"

#include <cmath>
#include <memory>

namespace experiments {

class TransformRosettes : public engine::core::Experiment {
public:
    TransformRosettes()
        : engine::core::Experiment("transform_rosettes")
    {
    }

    void update(float dt) override
    {
        rotation_ += dt * 0.5f;
        advance(dt);
    }

    void render(engine::rendering::Renderer& renderer) override
    {
        constexpr int spokes = 16;
        const float radius = 0.8f;
        const engine::math::Color lineColor{0.1f, 0.8f, 0.4f, 1.0f};

        for (int i = 0; i < spokes; ++i) {
            const float angle = (static_cast<float>(i) / spokes) * 2.0f * 3.14159f + rotation_;
            const auto end = engine::math::Vector2{std::cos(angle), std::sin(angle)} * radius;
            renderer.drawLine({0.0f, 0.0f}, end, lineColor);
        }

        const auto rotated =
            engine::math::Vector2{std::cos(rotation_), std::sin(rotation_)} * (radius * 0.3f);
        renderer.drawPoint(rotated, {1.0f, 0.9f, 0.3f, 1.0f});
    }

private:
    float rotation_{0.0f};
};

std::unique_ptr<engine::core::Experiment> createTransformRosettes()
{
    return std::make_unique<TransformRosettes>();
}

} // namespace experiments
