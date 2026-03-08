# AI & Learning Gym

## Purpose

AI & Learning Gym is the track for visually exploring learning, adaptation, optimization, and representation.

This Gym is not limited to “neural network chapters.” Many AI concepts appear naturally inside mathematics, algorithms, simulation, and emergent systems.

This Gym is a **conceptual collection**, not a code ownership container.

Experiments remain implemented in `/experiments` and may also belong to other Gyms.

---

## What This Gym Trains

This Gym develops intuition in:

- optimization
- gradients as learning signals
- loss landscapes
- decision boundaries
- function approximation
- reinforcement learning
- probabilistic reasoning
- search and planning
- representation learning
- multi-agent behavior

It emphasizes AI as something to be:
- visualized
- inspected
- iterated
- tested through behavior
- understood through changing geometry or changing policies

---

## Core Learning Style

This Gym teaches through visual systems such as:

- optimization trajectories
- contour-following particles
- classifier boundaries
- search frontiers
- policy-improving agents
- projected representations
- adaptive multi-agent behavior

The learner should be able to watch a system improve, search, approximate, classify, or coordinate.

---

## Relationship to Experiments

Important rule:

Experiments are the atomic runnable units.  
This Gym is a curated view over experiments that train AI and learning intuition.

An experiment may belong to multiple Gyms.

Examples:
- `contour_gradient_viewer` belongs here because gradients are learning signals, but it also belongs to Prueitt Mathematics Gym
- `maze_pathfinding` belongs here because search and planning are core AI ideas, but it also belongs to Algorithms & Geometry Gym
- `flocking` belongs here because multi-agent behavior matters, but it also belongs to Emergence Gym
- future `loss_landscape_descent` belongs here and also to Prueitt Mathematics Gym

Do not treat this Gym as a code module.

---

## Current Core Experiments

### `contour_gradient_viewer`
Concepts:
- gradients
- optimization intuition
- surface-following behavior

Why it belongs:
This is an early bridge from calculus into optimization and learning.

---

### `scalar_fields`
Concepts:
- surfaces as objective landscapes
- field-based representations
- function approximation intuition

Why it belongs:
Scalar fields are a natural substrate for visualizing loss and learned functions.

---

### `maze_pathfinding`
Concepts:
- search
- planning
- exploration
- goal-directed behavior

Why it belongs:
This is a direct visual route into classical AI.

---

### `flocking`
Concepts:
- distributed behavior
- local rule coordination
- multi-agent systems

Why it belongs:
It helps build intuition for agent-based intelligence and decentralized behavior.

---

### `noise_terrain`
Concepts:
- stochasticity
- randomness as environment structure
- probabilistic inputs

Why it belongs:
This provides early intuition for uncertainty and structured randomness.

---

## Future Candidate Experiments

- `loss_landscape_descent`
- `neural_decision_boundaries`
- `rl_grid_agent`
- `pca_viewer`
- `embedding_map`
- `particle_filter_demo`
- `ant_colony_paths`
- `neural_surface_fit`

These are especially strong additions because they make AI concepts visibly legible.

---

## Inclusion Rule

A new experiment belongs in this Gym if it significantly trains one or more of:

- optimization
- search and planning
- adaptation through feedback
- function approximation
- probabilistic inference
- learned or emergent behavior

and if the experiment makes those ideas visually inspectable.

---

## AI Is Embedded Across the Repo

This Gym should not be interpreted narrowly.

AI concepts often appear inside other experiments:

- gradients inside math experiments
- search inside algorithm experiments
- adaptation inside simulation experiments
- multi-agent behavior inside emergence experiments

This overlap is intentional.

---

## Anti-Patterns

Incorrect:
- treating AI as only neural networks
- isolating all AI ideas into a separate silo
- assuming a concept must only appear in this Gym to count as AI-related

Correct:
- embed AI concepts where they naturally appear
- use this Gym to curate those experiments
- allow strong overlap with Mathematics, Algorithms, Simulation, and Emergence