# Discovery Queue

This file captures new learning ideas without derailing current progress.

Use it as an intake buffer for curiosity.

When a new concept appears, add it here first instead of immediately restructuring the repo.

---

## Intake Rule

For each new idea, capture:

- concept
- possible visual experiment
- likely Gyms
- difficulty
- priority
- dependencies

Then decide later whether to schedule it.

---

## Candidate Ideas

### plant_growth_lsystem
- concept:
  - recursion
  - grammars
  - procedural growth
  - emergence
- visual experiment:
  - a branching plant generated over iterations
- likely Gyms:
  - Algorithms & Geometry Gym
  - Emergence Gym
  - Simulation Gym
- difficulty:
  - low to medium
- dependencies:
  - line rendering
  - transform stack

### loss_landscape_descent
- concept:
  - optimization
  - gradients
  - learning dynamics
- visual experiment:
  - particles descending a scalar loss surface
- likely Gyms:
  - Prueitt Mathematics Gym
  - AI & Learning Gym
- difficulty:
  - medium
- dependencies:
  - scalar field renderer
  - gradient viewer

### neural_decision_boundaries
- concept:
  - classification
  - function approximation
  - learning
- visual experiment:
  - a classifier learning colored regions over time
- likely Gyms:
  - AI & Learning Gym
- difficulty:
  - medium
- dependencies:
  - plotting
  - training loop
  - color field rendering

### ant_colony_paths
- concept:
  - swarm intelligence
  - path optimization
  - decentralized systems
- visual experiment:
  - ants laying paths and converging on efficient routes
- likely Gyms:
  - Emergence Gym
  - AI & Learning Gym
  - Algorithms & Geometry Gym
- difficulty:
  - medium
- dependencies:
  - agent loop
  - grid or graph world

### gravity_nbody
- concept:
  - force accumulation
  - numerical integration
  - emergent structure
- visual experiment:
  - orbiting particles and galaxy-like motion
- likely Gyms:
  - Simulation Gym
  - Emergence Gym
- difficulty:
  - medium
- dependencies:
  - particle loop
  - vector math

### pca_viewer
- concept:
  - dimensionality reduction
  - eigenvectors
  - representation
- visual experiment:
  - point clouds projected into 2D
- likely Gyms:
  - AI & Learning Gym
  - Data / Visualization support track
  - Prueitt Mathematics Gym
- difficulty:
  - medium
- dependencies:
  - point cloud renderer
  - matrix math

---

## Promotion Rule

An idea moves from Discovery Queue into the repo when:
- the visual result is clear
- the concept value is strong
- dependencies are mostly available
- it will not require backtracking over completed work