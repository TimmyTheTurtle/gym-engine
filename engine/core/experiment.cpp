// Call advance(dt) inside derived update(dt) when elapsed()
// should reflect experiment runtime.

#include "experiment.hpp"

namespace engine::core {

Experiment::Experiment(std::string name)
    : name_(std::move(name))
{
}

const std::string& Experiment::name() const noexcept
{
    return name_;
}

float Experiment::elapsed() const noexcept
{
    return elapsed_;
}

void Experiment::advance(float dt)
{
    elapsed_ += dt;
}

} // namespace engine::core
