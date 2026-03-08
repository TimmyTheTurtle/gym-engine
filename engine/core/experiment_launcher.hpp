#pragma once

#include "experiment.hpp"

#include <cstddef>
#include <memory>
#include <vector>

namespace engine::rendering {
class Renderer;
}

namespace engine::core {

class ExperimentLauncher {
public:
    ExperimentLauncher() = default;

    void addExperiment(std::unique_ptr<Experiment> experiment);
    std::size_t experimentCount() const noexcept;
    void setActive(std::size_t index);
    void nextExperiment();
    Experiment* activeExperiment() const noexcept;

    void updateActive(float dt);
    void renderActive(rendering::Renderer& renderer);

private:
    std::vector<std::unique_ptr<Experiment>> experiments_;
    std::size_t activeIndex_{0};
};

} // namespace engine::core
