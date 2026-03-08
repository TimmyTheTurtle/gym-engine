#pragma once

#include "engine/core/experiment.hpp"

#include <memory>

namespace experiments {

std::unique_ptr<engine::core::Experiment> createNoiseTerrain();

} // namespace experiments
