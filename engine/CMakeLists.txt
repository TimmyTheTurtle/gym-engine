add_library(gym_engine_core STATIC
    core/app_shell.cpp
    core/experiment.cpp
    core/experiment_launcher.cpp
    math/vector2.cpp
    rendering/debug_renderer.cpp
    rendering/svg_renderer.cpp
)

target_include_directories(gym_engine_core PUBLIC
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/core
    ${CMAKE_CURRENT_SOURCE_DIR}/math
    ${CMAKE_CURRENT_SOURCE_DIR}/rendering
)
