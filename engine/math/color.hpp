#pragma once

namespace engine::math {

struct Color {
    float r = 1.0f;
    float g = 1.0f;
    float b = 1.0f;
    float a = 1.0f;
};

inline Color lerp(Color from, Color to, float t) noexcept
{
    return {
        from.r + (to.r - from.r) * t,
        from.g + (to.g - from.g) * t,
        from.b + (to.b - from.b) * t,
        from.a + (to.a - from.a) * t,
    };
}

} // namespace engine::math
