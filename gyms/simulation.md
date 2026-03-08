# Simulation Gym

## Purpose

Simulation Gym is the track for learning how systems evolve over time.

This Gym focuses on turning mathematical rules, local interactions, or discretized physical ideas into visible time-evolving behavior.

This Gym is a **conceptual collection**, not a code ownership container.

Experiments remain implemented in `/experiments` and may also belong to other Gyms.

---

## What This Gym Trains

This Gym develops intuition in:

- time stepping
- discrete simulation
- numerical integration
- local update rules
- diffusion
- stability and instability
- conservation-like behavior
- field evolution
- particle and agent motion

It emphasizes simulation as something to be:
- stepped
- observed
- perturbed
- compared across parameters
- understood through visible change over time

---

## Core Learning Style

This Gym teaches through evolving systems such as:

- terrain relaxation
- diffusion processes
- field propagation
- particle motion
- coupled field dynamics
- growth and decay
- emergent motion

The learner should see how simple update rules create large-scale visible behavior.

---

## Relationship to Experiments

Important rule:

Experiments are the atomic runnable units.  
This Gym is a curated view over experiments that train simulation intuition.

An experiment may belong to multiple Gyms.

Examples:
- `scalar_fields` belongs here as a simulation substrate, but also belongs to Prueitt Mathematics Gym
- `reaction_diffusion` belongs here, but also belongs to Emergence Gym and Prueitt Mathematics Gym
- `plant_growth_lsystem` may belong here even though it also belongs to Algorithms & Geometry and Emergence

Do not treat this Gym as a code module.

---

## Current Core Experiments

### `noise_terrain`
Concepts:
- field initialization
- random input generation
- smoothing
- terrain substrate creation

Why it belongs:
This experiment provides initial conditions and terrain-like simulation state.

---

### `thermal_erosion`
Concepts:
- gradients
- local rules
- iterative state updates
- terrain evolution

Why it belongs:
This is a clean example of a simple simulation with visible time evolution.

---

### `scalar_fields`
Concepts:
- grid-based state
- field sampling
- functions as simulation substrates

Why it belongs:
Many simulations begin as fields or evolve on top of fields.

---

### `reaction_diffusion`
Concepts:
- diffusion
- coupled updates
- nonlinear behavior
- pattern evolution

Why it belongs:
This is one of the purest examples of simulation-driven visible structure.

---

### `flocking`
Concepts:
- agent updates
- motion rules
- neighborhood effects
- emergent coordination

Why it belongs:
This is a simulation of many simple interacting agents over time.

---

### `plant_growth_lsystem`
Concepts:
- iterative growth
- procedural expansion
- local generative rules

Why it belongs:
This belongs when the experiment is treated as a growing system rather than only a grammar exercise.

---

## Future Candidate Experiments

- `wave_field`
- `gravity_nbody`
- `fluid_grid`
- `predator_prey`
- `diffusion_stepper`
- `cave_generation`
- `ant_colony_paths`

These all fit because they make changing state visible over time.

---

## Inclusion Rule

A new experiment belongs in this Gym if it significantly trains one or more of:

- system evolution
- numerical stepping
- dynamic state updates
- visible consequences of local rules
- parameter-sensitive behavior over time

and if the experiment rewards observation of motion, change, or convergence.

---

## Anti-Patterns

Incorrect:
- restricting this Gym only to physics-looking experiments
- assuming simulations cannot also be math, AI, or emergence experiments
- moving experiments into a Gym-owned code tree

Correct:
- treat simulation broadly
- allow fields, agents, and growth systems
- let experiments overlap freely with Mathematics, Emergence, and AI