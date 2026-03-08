#include "app_shell.hpp"

#include "rendering/debug_renderer.hpp"
#include "rendering/svg_renderer.hpp"

#include <iostream>
#include <utility>

namespace engine::core {

AppShell::AppShell(ExperimentLauncher launcher)
    : launcher_(std::move(launcher))
{
}

void AppShell::run()
{
    std::unique_ptr<rendering::Renderer> renderer = std::make_unique<rendering::DebugRenderer>();
    constexpr int frameLimit = 6;
    constexpr float dt = 1.0f / 60.0f;

    for (int frame = 0; frame < frameLimit; ++frame) {
        auto* active = launcher_.activeExperiment();
        std::cout << "\n=== Frame " << (frame + 1) << " ===\n";
        if (active) {
            std::cout << "Active experiment: " << active->name() << "\n";
        }

        if (active) {
            const auto& name = active->name();
            if (name == "bezier_lab") {
                if (!dynamic_cast<rendering::SvgRenderer*>(renderer.get())) {
                    renderer = std::make_unique<rendering::SvgRenderer>();
                }
                static_cast<rendering::SvgRenderer*>(renderer.get())->setExperimentName(name);
            } else {
                if (!dynamic_cast<rendering::DebugRenderer*>(renderer.get())) {
                    renderer = std::make_unique<rendering::DebugRenderer>();
                }
            }
        } else if (!dynamic_cast<rendering::DebugRenderer*>(renderer.get())) {
            renderer = std::make_unique<rendering::DebugRenderer>();
        }

        launcher_.updateActive(dt);
        renderer->clear();
        launcher_.renderActive(*renderer);
        renderer->present();

        if ((frame + 1) % 2 == 0) {
            launcher_.nextExperiment();
        }
    }
}

} // namespace engine::core
