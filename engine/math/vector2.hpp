#pragma once

#include <cmath>

namespace engine::math {

struct Vector2 {
    float x = 0.0f;
    float y = 0.0f;

    constexpr Vector2() noexcept = default;
    constexpr Vector2(float xValue, float yValue) noexcept : x(xValue), y(yValue) {}
};

inline Vector2 operator+(Vector2 lhs, Vector2 rhs) noexcept
{
    return {lhs.x + rhs.x, lhs.y + rhs.y};
}

inline Vector2 operator-(Vector2 lhs, Vector2 rhs) noexcept
{
    return {lhs.x - rhs.x, lhs.y - rhs.y};
}

inline Vector2 operator*(Vector2 value, float scalar) noexcept
{
    return {value.x * scalar, value.y * scalar};
}

inline Vector2 operator*(float scalar, Vector2 value) noexcept
{
    return value * scalar;
}

float dot(Vector2 lhs, Vector2 rhs) noexcept;
float length(Vector2 value) noexcept;
Vector2 normalized(Vector2 value) noexcept;
Vector2 lerp(Vector2 from, Vector2 to, float t) noexcept;

} // namespace engine::math
