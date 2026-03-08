# Roadmap

This roadmap focuses on building a shared engine and an initial set of experiments that unlock multiple Gyms at once.

---

## Phase 0 — Repository Setup

Create:
- README.md
- AGENTS.md
- docs/context.md
- docs/experiment-template.md
- docs/concept-map.md
- docs/discovery-queue.md
- docs/first-experiments.md

Scaffold:
- engine/
- experiments/
- gyms/
- apps/gym-studio/

---

## Phase 1 — Shared Visual Core

Build the smallest useful common platform.

Target capabilities:
- app shell
- experiment launcher
- timing/update loop
- input handling
- line and point drawing
- image buffer rendering
- simple UI controls

Suggested engine structure:

- engine/core
- engine/math
- engine/rendering
- engine/simulation
- engine/ui

---

## Phase 2 — First Visual Wins

Implement these early experiments:

1. bezier_lab
2. parametric_curves
3. transform_rosettes
4. scalar_fields
5. contour_gradient_viewer

Goal:
- visible results quickly
- reusable primitives
- parameter-driven interaction

---

## Phase 3 — Grid and Simulation Systems

Add:
- grid storage
- double buffering
- field stepping
- neighborhood operations
- color mapping

Implement:
6. noise_terrain
7. thermal_erosion
8. maze_pathfinding
9. reaction_diffusion

---

## Phase 4 — Agent Systems

Add:
- agent update loop
- simple neighbor queries
- debug vectors
- world bounds
- trails

Implement:
10. flocking

Then consider:
- predator_prey
- rl_grid_agent
- ant_colony_paths

---

## Phase 5 — Curiosity Expansion

Introduce a repeatable experiment intake workflow.

Potential additions:
- plant_growth_lsystem
- loss_landscape_descent
- neural_decision_boundaries
- pca_viewer
- boids_with_predators
- gravity_nbody
- wave_field
- cave_generation

These should be added as experiments, not as repo rewrites.

---

## Milestone Definition

### Milestone A — Visual Playground v0.1
Working:
- bezier_lab
- parametric_curves
- transform_rosettes
- scalar_fields
- noise_terrain

### Milestone B — Simulation Playground v0.2
Working:
- contour_gradient_viewer
- thermal_erosion
- maze_pathfinding
- reaction_diffusion

### Milestone C — Emergence Playground v0.3
Working:
- flocking
- plant_growth_lsystem
- cave_generation or predator_prey

---

## Design Constraint

Do not block progress waiting for perfect architecture.

Prefer:
- small working experiments
- incremental shared infrastructure
- visible results