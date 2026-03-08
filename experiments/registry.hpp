#pragma once

#include "engine/core/experiment.hpp"

#include <memory>
#include <vector>

namespace experiments {

std::vector<std::unique_ptr<engine::core::Experiment>> createStarterExperiments();

} // namespace experiments
