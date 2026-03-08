#include "app_shell.hpp"

#include "rendering/renderer.hpp"

#include <iostream>
#include <utility>

namespace engine::core {

AppShell::AppShell(ExperimentLauncher launcher)
    : launcher_(std::move(launcher))
{
}

void AppShell::run()
{
    rendering::Renderer renderer;
    constexpr int frameLimit = 6;
    constexpr float dt = 1.0f / 60.0f;

    for (int frame = 0; frame < frameLimit; ++frame) {
        auto* active = launcher_.activeExperiment();
        std::cout << "\n=== Frame " << (frame + 1) << " ===\n";
        if (active) {
            std::cout << "Active experiment: " << active->name() << "\n";
        }

        launcher_.updateActive(dt);
        renderer.clear();
        launcher_.renderActive(renderer);
        renderer.present();

        if ((frame + 1) % 2 == 0) {
            launcher_.nextExperiment();
        }
    }
}

} // namespace engine::core
