#include "noise_terrain.hpp"

#include "engine/math/color.hpp"
#include "engine/math/vector2.hpp"
#include "engine/rendering/renderer.hpp"

#include <cmath>
#include <memory>

namespace experiments {

class NoiseTerrain : public engine::core::Experiment {
public:
    NoiseTerrain()
        : engine::core::Experiment("noise_terrain")
    {
    }

    void update(float dt) override
    {
        offset_ += dt * 0.5f;
        advance(dt);
    }

    void render(engine::rendering::Renderer& renderer) override
    {
        constexpr int sampleCount = 24;
        const float width = 2.0f;
        const float heightScale = 0.6f;
        const engine::math::Color stroke{0.4f, 0.9f, 0.7f, 1.0f};

        auto previous = samplePoint(0, width, heightScale);
        for (int i = 1; i <= sampleCount; ++i) {
            const auto current = samplePoint(static_cast<float>(i) / sampleCount, width, heightScale);
            renderer.drawLine(previous, current, stroke);
            previous = current;
        }
    }

private:
    engine::math::Vector2 samplePoint(float t, float width, float heightScale) const
    {
        const float x = (t - 0.5f) * width;
        const float base = std::sin((t + offset_) * 3.0f) * 0.3f + std::cos((t * 2.0f + offset_) * 2.5f) * 0.2f;
        const float y = base * heightScale;
        return {x, y};
    }

    float offset_{0.0f};
};

std::unique_ptr<engine::core::Experiment> createNoiseTerrain()
{
    return std::make_unique<NoiseTerrain>();
}

} // namespace experiments
