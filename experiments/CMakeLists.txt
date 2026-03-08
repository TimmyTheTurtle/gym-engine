add_library(experiments STATIC
    bezier_lab/bezier_lab.cpp
    parametric_curves/parametric_curves.cpp
    transform_rosettes/transform_rosettes.cpp
    scalar_fields/scalar_fields.cpp
    noise_terrain/noise_terrain.cpp
    registry.cpp
)

target_include_directories(experiments PUBLIC
    ${CMAKE_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}
)
target_link_libraries(experiments PUBLIC gym_engine_core)
