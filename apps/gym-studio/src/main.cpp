#include "engine/core/app_shell.hpp"
#include "engine/core/experiment_launcher.hpp"
#include "experiments/registry.hpp"

#include <iostream>
#include <utility>

int main()
{
    engine::core::ExperimentLauncher launcher;
    auto experimentList = experiments::createStarterExperiments();

    for (auto& experiment : experimentList) {
        launcher.addExperiment(std::move(experiment));
    }

    engine::core::AppShell shell(std::move(launcher));
    shell.run();

    std::cout << "\nGym Studio finished.\n";
    return 0;
}
