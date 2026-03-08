# First Experiments

These are the first ten experiments to implement because they produce strong visual payoff while building reusable infrastructure.

---

## 1. bezier_lab
Gyms:
- Prueitt Mathematics Gym

Concepts:
- interpolation
- affine combinations
- parameterization
- curve construction

Visual:
- animated de Casteljau construction
- draggable control points
- final Bézier curve

Builds:
- 2D line rendering
- point rendering
- handles
- animation controls

---

## 2. parametric_curves
Gyms:
- Prueitt Mathematics Gym

Concepts:
- trig
- parametric systems
- sampling
- numerical arc length

Visual:
- Lissajous curves
- spirals
- roses
- hypotrochoids

Builds:
- curve sampler
- parameter presets

---

## 3. transform_rosettes
Gyms:
- Prueitt Mathematics Gym
- Algorithms & Geometry Gym

Concepts:
- transforms
- matrix multiplication
- composition
- symmetry

Visual:
- rosettes
- tunnels
- repeated transformed motifs

Builds:
- matrix utilities
- instance rendering

---

## 4. scalar_fields
Gyms:
- Prueitt Mathematics Gym
- Simulation Gym
- AI & Learning Gym

Concepts:
- functions of two variables
- sampling
- field representation

Visual:
- grayscale and false-color fields
- hills, saddles, waves

Builds:
- grid sampling
- image buffer rendering
- function presets

---

## 5. contour_gradient_viewer
Gyms:
- Prueitt Mathematics Gym
- AI & Learning Gym

Concepts:
- gradients
- partial derivatives
- optimization intuition

Visual:
- contour lines
- gradient arrows
- particles following ascent/descent

Builds:
- finite differences
- vector glyphs
- simple particle stepping

---

## 6. noise_terrain
Gyms:
- Simulation Gym
- Emergence Gym

Concepts:
- randomness
- smoothing
- procedural terrain

Visual:
- terrain-like scalar fields
- cloud and heightmap patterns

Builds:
- RNG helpers
- filters
- terrain palettes

---

## 7. thermal_erosion
Gyms:
- Simulation Gym
- Prueitt Mathematics Gym

Concepts:
- gradients
- stability
- iterative simulation
- local rules

Visual:
- terrain relaxing over time

Builds:
- simulation stepping
- double buffering
- neighborhood operations

---

## 8. maze_pathfinding
Gyms:
- Algorithms & Geometry Gym
- AI & Learning Gym

Concepts:
- recursion
- graph search
- planning
- exploration

Visual:
- maze generation
- frontier expansion
- final path

Builds:
- tile grid
- search utilities
- overlays

---

## 9. reaction_diffusion
Gyms:
- Simulation Gym
- Emergence Gym
- Prueitt Mathematics Gym

Concepts:
- coupled fields
- diffusion
- emergence
- iterative systems

Visual:
- spots
- stripes
- organic skin-like patterns

Builds:
- multi-field grids
- PDE-style stepping
- color mapping

---

## 10. flocking
Gyms:
- Emergence Gym
- AI & Learning Gym

Concepts:
- multi-agent systems
- local rules
- self-organization
- vector behavior

Visual:
- coordinated flock motion
- trails
- obstacle avoidance later

Builds:
- agent update loop
- neighbor queries
- debug vectors

---

## 11. plant_growth_lsystem
Gyms:
- Algorithms & Geometry Gym
- Emergence Gym
- Simulation Gym

Concepts:
- recursion
- grammars
- procedural growth
- emergence

Visual:
- plant-like branching structures over iterations

Builds:
- turtle graphics
- transform stack
- recursive rendering

This one is intentionally listed early as a curiosity-friendly expansion candidate.

---

## Recommended Build Order

1. bezier_lab
2. parametric_curves
3. transform_rosettes
4. scalar_fields
5. contour_gradient_viewer
6. noise_terrain
7. thermal_erosion
8. maze_pathfinding
9. reaction_diffusion
10. flocking
11. plant_growth_lsystem

---

## First Milestone

### Visual Playground v0.1
Must include:
- bezier_lab
- parametric_curves
- transform_rosettes
- scalar_fields
- noise_terrain

That is enough to make the repo feel alive immediately.