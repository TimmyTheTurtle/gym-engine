#include "experiment_launcher.hpp"

#include "rendering/renderer.hpp"

#include <algorithm>

namespace engine::core {

void ExperimentLauncher::addExperiment(std::unique_ptr<Experiment> experiment)
{
    if (experiment) {
        experiments_.push_back(std::move(experiment));
    }
}

std::size_t ExperimentLauncher::experimentCount() const noexcept
{
    return experiments_.size();
}

void ExperimentLauncher::setActive(std::size_t index)
{
    if (!experiments_.empty()) {
        activeIndex_ = std::min(index, experiments_.size() - 1);
    }
}

void ExperimentLauncher::nextExperiment()
{
    if (experiments_.empty()) {
        return;
    }

    activeIndex_ = (activeIndex_ + 1) % experiments_.size();
}

Experiment* ExperimentLauncher::activeExperiment() const noexcept
{
    if (experiments_.empty()) {
        return nullptr;
    }

    return experiments_[activeIndex_].get();
}

void ExperimentLauncher::updateActive(float dt)
{
    if (auto* experiment = activeExperiment()) {
        experiment->update(dt);
    }
}

void ExperimentLauncher::renderActive(rendering::Renderer& renderer)
{
    if (auto* experiment = activeExperiment()) {
        experiment->render(renderer);
    }
}

} // namespace engine::core
