#include "vector2.hpp"

#include <cmath>

namespace engine::math {

float dot(Vector2 lhs, Vector2 rhs) noexcept
{
    return lhs.x * rhs.x + lhs.y * rhs.y;
}

float length(Vector2 value) noexcept
{
    return std::sqrt(dot(value, value));
}

Vector2 normalized(Vector2 value) noexcept
{
    const auto len = length(value);
    if (len == 0.0f) {
        return value;
    }

    return value * (1.0f / len);
}

Vector2 lerp(Vector2 from, Vector2 to, float t) noexcept
{
    return {from.x + (to.x - from.x) * t, from.y + (to.y - from.y) * t};
}

} // namespace engine::math
