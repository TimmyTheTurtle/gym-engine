add_executable(gym_studio
    src/main.cpp
)

target_link_libraries(gym_studio PRIVATE gym_engine_core experiments)
target_include_directories(gym_studio PRIVATE ${CMAKE_CURRENT_SOURCE_DIR}/src)
