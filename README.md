# Gym Engine

A graphics-driven learning laboratory for mathematics, simulation, AI, algorithms, and emergent systems.

This project is built around a simple idea:

> difficult concepts are easier to learn when they are explored through interactive visual experiments.

Instead of studying only through lectures, notes, or static exercises, Gym Engine teaches through small programs that produce visible, often beautiful, behavior on screen.

Each experiment is designed to strengthen one or more intellectual "muscles" while producing satisfying visual feedback.

---

## Core Philosophy

Every worthwhile lesson in this repository should do three things:

1. train a real concept
2. produce an interesting visual result
3. invite experimentation through parameters

Examples of good outputs:

- parametric curves
- scalar fields
- contour maps
- particle systems
- terrains
- agent behavior
- decision boundaries
- emergent patterns
- evolving simulations

If a lesson does not produce something visually interesting, it probably does not belong here.

---

## The Gym Model

This repository is organized into Learning Gyms.

A Gym is **not** a rigid course silo.  
A Gym is a **training collection** for a particular family of concepts.

Concepts are allowed to appear in multiple Gyms.

Examples:

- gradients belong to mathematics, optimization, and AI
- stochastic systems belong to probability, simulation, and emergence
- pathfinding belongs to algorithms, AI, and agent systems
- plant growth can belong to algorithms, emergence, and simulation

This means the project grows by **adding experiments**, not by rewriting old sections.

---

## Current Gyms

### Prueitt Mathematics Gym
Inspired by classic experimental computer graphics and math-through-visualization.

Concepts:
- linear algebra
- multivariable calculus
- integrals
- probability
- homogeneous linear systems
- numerical methods

Visual experiments:
- Bézier construction
- parametric curves
- transform rosettes
- scalar fields
- contour maps
- gradients
- noise terrains
- erosion
- reaction-diffusion

---

### Simulation Gym
Explores systems that evolve over time.

Concepts:
- time stepping
- numerical integration
- PDE approximations
- stability
- conservation
- particle systems
- field systems

Visual experiments:
- wave fields
- erosion
- diffusion
- reaction-diffusion
- gravity systems
- fluids
- terrain evolution

---

### AI & Learning Gym
Explores learning systems visually.

Concepts:
- optimization
- gradient descent
- loss surfaces
- function approximation
- reinforcement learning
- probabilistic reasoning
- multi-agent behavior
- representation learning

Visual experiments:
- gradient descent on surfaces
- decision boundary explorers
- learning agents
- scalar field approximation
- policy evolution
- embedding visualizations

---

### Emergence Gym
Explores complexity arising from simple rules.

Concepts:
- self-organization
- swarm behavior
- cellular automata
- nonlinear systems
- evolutionary dynamics
- feedback loops

Visual experiments:
- flocking
- predator-prey systems
- sandpile models
- cellular automata
- reaction-diffusion
- cave generation
- evolving ecosystems

---

### Algorithms & Geometry Gym
Explores core computer science ideas through visual systems.

Concepts:
- recursion
- graph search
- pathfinding
- computational geometry
- spatial partitioning
- procedural generation

Visual experiments:
- maze generation
- A*
- Voronoi diagrams
- Delaunay triangulation
- L-systems
- growth grammars

---

## Repository Structure

```text
gym-engine/
├── README.md
├── AGENTS.md
├── docs/
│   ├── context.md
│   ├── roadmap.md
│   ├── experiment-template.md
│   ├── concept-map.md
│   ├── discovery-queue.md
│   └── first-experiments.md
├── engine/
│   ├── core/
│   ├── math/
│   ├── rendering/
│   ├── simulation/
│   └── ui/
├── experiments/
│   ├── bezier_lab/
│   ├── parametric_curves/
│   ├── transform_rosettes/
│   ├── scalar_fields/
│   ├── contour_gradient_viewer/
│   ├── noise_terrain/
│   ├── thermal_erosion/
│   ├── maze_pathfinding/
│   ├── reaction_diffusion/
│   ├── flocking/
│   └── plant_growth_lsystem/
├── gyms/
│   ├── prueitt-math.md
│   ├── simulation.md
│   ├── ai-learning.md
│   ├── emergence.md
│   └── algorithms-geometry.md
└── apps/
    └── gym-studio/