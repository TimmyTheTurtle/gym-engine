# Project Ontology

This document defines the conceptual structure of Gym Engine.

It describes the relationship between Concepts, Experiments, Labs, and Gyms.

These definitions should remain stable and should be used by both human contributors and AI agents when reasoning about the repository.

---

# Overview

The project is organized into four conceptual layers:

Concept → Experiment → Lab → Gym

These layers describe **learning structure**, not code ownership.

Only Experiments are implemented directly in code.

Labs and Gyms are conceptual groupings used for organizing knowledge and curriculum.

---

# Concept

A **Concept** is an idea, principle, or mental skill being trained.

Concepts represent the intellectual goals of experiments.

Examples:

- interpolation
- gradients
- recursion
- diffusion
- pathfinding
- optimization
- flocking
- procedural growth
- Monte Carlo methods
- eigenvectors
- scalar fields

Concepts are not code modules.

They are documented ideas that appear across experiments.

One concept may appear in many experiments.

---

# Experiment

An **Experiment** is the atomic runnable unit of the system.

Experiments are implemented in code and produce visual output.

Experiments should be:

- runnable
- visually interpretable
- parameterized when useful
- focused on demonstrating one or more concepts

Experiments should usually:

- expose adjustable parameters
- produce visible behavior
- demonstrate a concept clearly

Examples of experiments:

- `bezier_lab`
- `scalar_fields`
- `contour_gradient_viewer`
- `thermal_erosion`
- `reaction_diffusion`
- `maze_pathfinding`
- `plant_growth_lsystem`

Experiments live in the source code and form the core of the project.

---

# Lab

A **Lab** is a focused conceptual grouping of related experiments.

Labs represent a specific conceptual training area.

Examples:

- Bezier Lab
- Parametric Curves Lab
- Scalar Field Lab
- Terrain Simulation Lab
- Pathfinding Lab
- Reaction-Diffusion Lab
- Flocking Lab
- L-System Lab

A Lab:

- groups related experiments
- focuses on a specific skill or concept cluster
- may appear in multiple Gyms

Labs are **taxonomy**, not code ownership containers.

Experiments should not be physically moved into Lab directories unless those directories are explicitly designed for experiment grouping.

---

# Gym

A **Gym** is a broader conceptual training track.

Gyms group multiple Labs into a larger learning discipline.

Current Gyms include:

- Prueitt Mathematics Gym
- Simulation Gym
- AI & Learning Gym
- Emergence Gym
- Algorithms & Geometry Gym

Gyms represent different **ways of viewing the same experiments**.

Because concepts overlap across disciplines, experiments may appear in multiple Gyms.

Examples:

Reaction-diffusion belongs to:
- Mathematics (PDE intuition)
- Simulation (time-evolving systems)
- Emergence (pattern formation)

Pathfinding belongs to:
- Algorithms & Geometry
- AI & Learning

Gyms are also **taxonomy**, not code ownership containers.

---

# Relationship Rules

These rules should always hold:

Experiments are the atomic runnable units.

Labs group related experiments.

Gyms group Labs.

Concepts appear across experiments.

Experiments may belong to multiple Labs.

Labs may belong to multiple Gyms.

Gyms may share experiments and Labs freely.

The structure is intentionally overlapping.

---

# Structural Principles

The repository grows primarily by **adding experiments**, not by reorganizing taxonomy.

When a new idea appears:

1. define the concept
2. propose a visual experiment
3. implement or scaffold the experiment
4. document the concept if needed
5. optionally link the experiment to one or more Labs
6. optionally link the Labs to one or more Gyms

Avoid large structural rewrites when adding new ideas.

Prefer incremental growth.

---

# Anti-Patterns

Incorrect approaches include:

- reorganizing source code so Gyms own experiments
- forcing experiments into only one Gym
- duplicating experiments across multiple locations
- restructuring the repository to match academic disciplines
- rewriting existing taxonomy unnecessarily

Correct approaches include:

- experiment-first architecture
- overlapping conceptual groupings
- incremental addition of experiments
- stable ontology with flexible conceptual mapping

---

# Mental Model

A useful mental model is:

Concepts are the **ideas**.

Experiments are the **exercises**.

Labs are the **workstations**.

Gyms are the **training programs**.

The code implements experiments.

The documentation organizes the learning structure.

---

# Purpose of This Ontology

This ontology exists to ensure that:

- the project remains extensible
- new concepts can be added without restructuring the repository
- AI agents understand the architecture before modifying code
- contributors share a consistent mental model of the system

If a proposed change conflicts with this ontology, the ontology should be reviewed before altering repository structure.