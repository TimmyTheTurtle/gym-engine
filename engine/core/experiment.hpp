// Call advance(dt) inside derived update(dt) when elapsed()
// should reflect experiment runtime.

#pragma once

#include <string>

namespace engine::rendering {
class Renderer;
}

namespace engine::core {

class Experiment {
public:
    explicit Experiment(std::string name);
    virtual ~Experiment() = default;

    const std::string& name() const noexcept;
    float elapsed() const noexcept;

    virtual void update(float dt) = 0;
    virtual void render(rendering::Renderer& renderer) = 0;

protected:
    void advance(float dt);

private:
    std::string name_;
    float elapsed_{0.0f};
};

} // namespace engine::core
