
---

## FILE: `AGENTS.md`

```markdown
# AGENTS.md

This repository contains Gym Engine, a graphics-driven experimental learning system.

Agents working in this repository should understand the following rules.

---

## Mission

Build a modular visual experimentation platform for learning:

- mathematics
- simulation
- AI and learning systems
- emergence and complex systems
- algorithms and geometry

through interactive graphical experiments.

---

## Core Rule

Every meaningful module should produce visible feedback.

Examples:
- curves
- meshes
- fields
- terrains
- particles
- agents
- evolving simulations
- optimization paths
- emergent patterns

Prefer work that produces something observable on screen.

If a task does not produce visual feedback, it should usually support something that does.

---

## Project Philosophy

This project is not a traditional course repository.

It is a growing collection of visual experiments.

Concepts should be allowed to appear across multiple Gyms.

Do not force rigid disciplinary boundaries.

Examples:
- gradients belong to both Math and AI
- reaction-diffusion belongs to Math, Simulation, and Emergence
- pathfinding belongs to Algorithms and AI
- L-systems belong to Algorithms, Emergence, and procedural simulation

---

## Atomic Unit: Experiment

The smallest meaningful unit is the Experiment.

Each experiment should have:
- a clear name
- a runnable module
- a visual system
- adjustable parameters
- concept tags
- a short statement of learning value

Experiments should not be buried inside Gyms.

Gyms are collections of experiments, not ownership containers.

---

## Adding New Concepts

When a new concept is introduced, do not redesign the whole course.

Use this process:

1. define the concept
2. propose a visual experiment
3. create or scaffold an experiment module
4. add tags
5. update the concept map
6. optionally link the experiment into one or more Gyms

This prevents backtracking over completed sections.

---

## Current Gyms

- Prueitt Mathematics Gym
- Simulation Gym
- AI & Learning Gym
- Emergence Gym
- Algorithms & Geometry Gym

These Gyms overlap by design.

---

## Architecture Preferences

Prefer:
- strongly typed languages
- compiled-language-first mindset
- small modular experiments
- reusable rendering and simulation systems
- explicit data flow
- parameterized experiments
- clean folder structure

Avoid:
- monolithic "do everything" demos
- unnecessary abstraction before a concrete need appears
- hiding important math behind magic helper code
- tightly coupling experiments to each other

---

## Output Preferences for Agents

When proposing work:
- suggest repo structure before large implementation
- prefer small working vertical slices
- produce scaffolded experiments early
- make demos interactive when practical
- expose parameters clearly
- optimize for visual payoff and conceptual clarity

Prefer:
- working visual prototypes
over
- broad speculative architecture without runnable results

---

## Engine Assumptions

The engine should gradually support:
- 2D plotting
- image buffers
- line rendering
- point rendering
- field rendering
- grid simulation
- simple agents
- UI controls for parameters
- experiment registry / launcher

Agents should look for opportunities to reuse core systems across multiple experiments.

---

## Naming Guidance

Use descriptive experiment names, such as:
- bezier_lab
- scalar_fields
- contour_gradient_viewer
- thermal_erosion
- reaction_diffusion
- maze_pathfinding
- plant_growth_lsystem

Avoid vague names.

---

## Visual Priority

When choosing between two equally valid tasks, choose the one that:
1. produces a clearer visual result
2. teaches a reusable concept
3. strengthens shared engine infrastructure