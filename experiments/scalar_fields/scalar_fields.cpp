#include "scalar_fields.hpp"

#include "engine/math/color.hpp"
#include "engine/math/vector2.hpp"
#include "engine/rendering/renderer.hpp"

#include <cmath>
#include <memory>

namespace experiments {

class ScalarFields : public engine::core::Experiment {
public:
    ScalarFields()
        : engine::core::Experiment("scalar_fields")
    {
    }

    void update(float dt) override
    {
        phase_ += dt * 0.6f;
        advance(dt);
    }

    void render(engine::rendering::Renderer& renderer) override
    {
        constexpr int width = 6;
        constexpr int height = 6;
        const float spacing = 0.4f;

        for (int y = 0; y < height; ++y) {
            for (int x = 0; x < width; ++x) {
                const float nx = (static_cast<float>(x) / (width - 1) - 0.5f) * spacing * width;
                const float ny = (static_cast<float>(y) / (height - 1) - 0.5f) * spacing * height;
                const float scalar = std::sin(nx + phase_) * std::cos(ny > 0 ? ny : -ny + phase_);

                const auto color = engine::math::Color{
                    0.4f + 0.6f * scalar,
                    0.2f + 0.6f * (1.0f - std::abs(scalar)),
                    0.8f - 0.5f * scalar,
                    1.0f,
                };

                renderer.drawPoint({nx, ny}, color);
            }
        }
    }

private:
    float phase_{0.0f};
};

std::unique_ptr<engine::core::Experiment> createScalarFields()
{
    return std::make_unique<ScalarFields>();
}

} // namespace experiments
