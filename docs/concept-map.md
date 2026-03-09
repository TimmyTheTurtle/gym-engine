# Concept Map

This file tracks which concepts are covered by which experiments.

It exists to:
- reveal gaps
- show overlap
- prevent accidental neglect of major skills
- support adding new concepts without backtracking

---

## Mathematics

- linear algebra:
  - bezier_lab
  - transform_rosettes
  - contour_gradient_viewer
  - flocking

- homogeneous linear systems:
  - transform_rosettes
  - nullspace_visualizer (future)
  - eigenvector_viewer (future)

- multivariable calculus:
  - scalar_fields
  - contour_gradient_viewer
  - thermal_erosion
  - reaction_diffusion

- integrals:
  - parametric_curves
  - scalar_fields
  - monte_carlo_field_integration (future)

- probability:
  - noise_terrain
  - reaction_diffusion
  - maze_pathfinding (search randomness variants)
  - monte_carlo_area (future)

- numerical methods:
  - contour_gradient_viewer
  - thermal_erosion
  - reaction_diffusion

---

## Simulation

- time stepping:
  - thermal_erosion
  - reaction_diffusion
  - flocking

- field systems:
  - scalar_fields
  - contour_gradient_viewer
  - reaction_diffusion
  - noise_terrain

- stability and convergence:
  - thermal_erosion
  - reaction_diffusion
  - loss_landscape_descent (future)

---

## AI & Learning

- optimization:
  - contour_gradient_viewer
  - loss_landscape_descent (future)

- reinforcement learning:
  - rl_grid_agent (future)
  - maze_pathfinding
  - flocking (behavior rules / future variants)

- representation learning:
  - pca_viewer (future)
  - embedding_map (future)

- function approximation:
  - scalar_fields
  - neural_surface_fit (future)

- probabilistic reasoning:
  - monte_carlo_area (future)
  - monte_carlo_field_integration (future)
  - particle_filter_demo (future)

- multi-agent systems:
  - flocking
  - predator_prey (future)
  - ant_colony_paths (future)

---

## Emergence

- self-organization:
  - reaction_diffusion
  - flocking
  - cave_generation (future)

- cellular systems:
  - cave_generation (future)
  - game_of_life (future)

- evolutionary systems:
  - evolving_agents (future)
  - genetic_art (future)

- procedural growth:
  - plant_growth_lsystem
  - procedural_tree_growth (future)

---

## Algorithms & Geometry

- interpolation:
  - bezier_lab
  - bezier_subdivision
  - curve_arc_length
  - spline_playground
  - transform_rosettes

- recursion:
  - maze_generation within maze_pathfinding
  - plant_growth_lsystem

- graph search:
  - maze_pathfinding

- computational geometry:
  - transform_rosettes
  - voronoi_viewer (future)
  - delaunay_viewer (future)

- procedural generation:
  - noise_terrain
  - plant_growth_lsystem
  - cave_generation (future)

- curve subdivision:
  - bezier_subdivision

- curve parameterization:
  - curve_arc_length

- splines:
  - spline_playground

- matrix transforms:
  - transform_rosettes
  - contour_gradient_viewer

---

## Systems & Performance

- high performance computing:
  - reaction_diffusion
  - noise_terrain
  - thermal_erosion

- multithreading:
  - noise_terrain
  - thermal_erosion

- concurrency issues:
  - thermal_erosion
  - noise_terrain

- gpu programming:
  - reaction_diffusion
  - noise_terrain

These concepts are exercised implicitly across the lab slate whenever existing
experiments push throughput, tilt work across threads, or suggest GPU-oriented
optimizations. Treat them as shared practical concerns rather than isolated
topics.

---

## Rule for Expansion

When a new concept appears:
1. add or propose an experiment
2. tag it
3. link it here
4. optionally assign it to one or more Gyms