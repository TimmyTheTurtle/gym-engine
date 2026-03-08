# Prueitt Mathematics Gym

## Purpose

Prueitt Mathematics Gym is the visual mathematics track of Gym Engine.

It is inspired by classic computer graphics approaches that make higher mathematics feel exploratory, visual, and rewarding. The goal is to learn mathematics by programming experiments that produce satisfying visual results.

This Gym is a **conceptual collection**, not a code ownership container.

Experiments in this Gym remain implemented in `/experiments` and may also belong to other Gyms.

---

## What This Gym Trains

This Gym develops intuition in:

- linear algebra
- affine combinations
- interpolation
- systems of homogeneous linear equations
- multivariable calculus
- gradients
- integrals
- probability
- numerical methods

It emphasizes mathematics as something to be:
- visualized
- manipulated
- sampled
- iterated
- explored through parameter changes

---

## Core Learning Style

This Gym teaches mathematics through:

- curves
- line constructions
- fields
- contour maps
- surfaces
- terrain-like structures
- evolving systems

The learner should repeatedly encounter the same concept through different experiments.

Examples:
- gradients appear in scalar fields, contour maps, erosion, and optimization
- probability appears in noise fields, Monte Carlo methods, and stochastic simulations
- linear algebra appears in Bézier geometry, transforms, and vector-driven systems

---

## Relationship to Experiments

Important rule:

Experiments are the atomic runnable units.  
This Gym is a curated view over experiments that train mathematical intuition.

An experiment may belong to multiple Gyms.

Examples:
- `scalar_fields` belongs here, but also belongs to Simulation Gym and AI & Learning Gym
- `reaction_diffusion` belongs here, but also belongs to Simulation Gym and Emergence Gym

Do not treat this Gym as a code module.

---

## Current Core Experiments

### `bezier_lab`
Concepts:
- interpolation
- affine combinations
- parameterization
- curve construction

Why it belongs:
This experiment makes linear interpolation and nested interpolation visible.

---

### `parametric_curves`
Concepts:
- trigonometric systems
- parametric equations
- numerical arc length
- periodic structure

Why it belongs:
This experiment turns equations into images and supports direct intuition-building through parameter changes.

---

### `transform_rosettes`
Concepts:
- matrix transforms
- composition
- symmetry
- repeated structure

Why it belongs:
This experiment gives a visual path into linear algebra and geometric transformation.

---

### `scalar_fields`
Concepts:
- functions of two variables
- sampling
- field representation
- surface intuition

Why it belongs:
This is one of the core multivariable calculus experiments.

---

### `contour_gradient_viewer`
Concepts:
- gradients
- partial derivatives
- level sets
- optimization intuition

Why it belongs:
This experiment connects fields, derivatives, and motion.

---

### `noise_terrain`
Concepts:
- randomness
- distributions
- smoothing
- procedural structure

Why it belongs:
This supports probability and field intuition.

---

### `thermal_erosion`
Concepts:
- gradients
- finite differences
- iterative simulation
- numerical behavior

Why it belongs:
This brings calculus and numerical methods into an evolving visual system.

---

### `reaction_diffusion`
Concepts:
- coupled fields
- diffusion
- emergence
- iterative numerical systems

Why it belongs:
This connects mathematical systems to visible pattern formation.

---

## Future Candidate Experiments

- `nullspace_visualizer`
- `eigenvector_viewer`
- `monte_carlo_area`
- `monte_carlo_field_integration`
- `loss_landscape_descent`
- `pca_viewer`

These are good future additions because they strengthen the same mathematical muscles through different visual systems.

---

## Inclusion Rule

A new experiment belongs in this Gym if it significantly trains one or more of:

- mathematical structure
- calculus intuition
- linear algebra intuition
- probabilistic reasoning
- numerical approximation

and if it does so through clear visual feedback.

---

## Anti-Patterns

Incorrect:
- treating this Gym as the place where experiments must physically live
- assuming math experiments only belong here
- restructuring older experiments just to preserve Gym purity

Correct:
- keep experiments in `/experiments`
- allow overlap with Simulation, AI, and Emergence
- expand the Gym by linking in new experiments