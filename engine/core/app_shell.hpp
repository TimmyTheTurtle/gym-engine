#pragma once

#include "experiment_launcher.hpp"

#include <memory>
#include <string>

namespace engine::core {

class AppShell {
public:
    explicit AppShell(ExperimentLauncher launcher);

    void run();

private:
    ExperimentLauncher launcher_;
};

} // namespace engine::core
