# Gym Engine – Project Guide

This document summarizes the conceptual architecture and working philosophy of Gym Engine.

It serves as the guiding reference for both human contributors and AI agents working in the repository.

This guide explains:

- what the system is trying to achieve
- how the repository is structured
- how Concepts, Experiments, Labs, and Gyms relate
- how to extend the project safely
- how the documentation ecosystem works

If something about the project becomes unclear, return to this document.

---

# Project Purpose

Gym Engine is a visual experimentation platform for learning technical concepts.

The system teaches topics through interactive graphical experiments rather than static lectures or problem sets.

Core disciplines explored include:

- mathematics
- simulation
- AI and learning systems
- emergence and complex systems
- algorithms and geometry

The key learning principle is:

> Understanding improves dramatically when mathematical or algorithmic systems produce visible behavior.

---

# Core Principle

Every meaningful module should produce visible feedback.

Examples of valid visual outputs include:

- curves
- meshes
- scalar fields
- contour maps
- terrains
- particle systems
- evolving simulations
- agent behaviors
- search frontiers
- emergent patterns
- branching growth structures

If a task does not directly produce visual feedback, it should usually support a system that will.

---

# The Ontology

Gym Engine uses a four-layer conceptual model.

Concept → Experiment → Lab → Gym

These layers describe learning structure, not code ownership.

---

# Concept

A Concept is an intellectual skill or idea being trained.

Examples:

- interpolation
- gradients
- recursion
- pathfinding
- diffusion
- optimization
- procedural growth
- Monte Carlo methods
- eigenvectors

Concepts are not code modules.

They are ideas that appear across multiple experiments.

---

# Experiment

An Experiment is the atomic runnable unit of the system.

Experiments:

- are implemented in code
- produce visual output
- demonstrate one or more Concepts
- are designed to be exploratory
- may expose adjustable parameters
- should be runnable independently

Examples:

- bezier_lab
- scalar_fields
- contour_gradient_viewer
- thermal_erosion
- reaction_diffusion
- maze_pathfinding
- plant_growth_lsystem

Experiments are the core implementation unit of the repository.

---

# Lab

A Lab is a focused conceptual grouping of related experiments.

Labs represent specific conceptual training stations.

Examples:

- Bezier Lab
- Scalar Field Lab
- Terrain Simulation Lab
- Pathfinding Lab
- Reaction Diffusion Lab
- Flocking Lab
- L-System Lab

Labs group experiments that explore similar concepts.

Labs are taxonomy, not source code ownership containers.

Labs may appear in multiple Gyms.

---

# Gym

A Gym is a broader conceptual training discipline.

Gyms group Labs into larger learning tracks.

Current Gyms include:

- Prueitt Mathematics Gym
- Simulation Gym
- AI & Learning Gym
- Emergence Gym
- Algorithms & Geometry Gym

Gyms represent different perspectives on the same experiments.

Because concepts overlap, experiments frequently appear in multiple Gyms.

Example:

Reaction diffusion belongs to:

- Mathematics (PDE intuition)
- Simulation (time-evolving systems)
- Emergence (pattern formation)

Overlap is intentional and desirable.

---

# Structural Rules

The following rules should always hold.

Experiments are the atomic runnable units.

Labs group related experiments.

Gyms group Labs.

Concepts appear across experiments.

Experiments may belong to multiple Labs.

Labs may belong to multiple Gyms.

The repository should grow primarily by adding experiments, not by reorganizing taxonomy.

---

# Anti-Patterns

Avoid the following:

- moving experiments into Gym-owned source trees
- forcing experiments into a single Gym
- duplicating experiments across directories
- restructuring the repository to match academic departments
- redesigning the taxonomy when new ideas appear

Correct approach:

- experiment-first architecture
- overlapping conceptual structure
- incremental expansion
- stable ontology

---

# Documentation Ecosystem

Several files help both humans and AI agents understand the system.

## Ontology

docs/ontology.md

Defines the formal relationship between Concepts, Experiments, Labs, and Gyms.

This document should remain stable.

---

## Experiment Registry

docs/experiment-registry.yaml

Maps:

experiment → concepts / labs / gyms

Example entry:

```yaml
bezier_lab:
  concepts:
    - interpolation
    - parametric curves

  labs:
    - bezier-lab

  gyms:
    - prueitt-mathematics
    - algorithms-geometry
```

This allows agents to reason about the system programmatically.

---

## Concept Coverage Map

docs/concept-coverage.yaml

Maps:

concept → experiments / coverage / suggested next experiments

This file answers questions like:

- which concepts are well-covered
- which concepts have few experiments
- which experiments would provide the highest learning leverage

Example:

```yaml
optimization:
  coverage: low
  experiments: []
  suggested_next:
    - loss_landscape_descent
```

---

# Directory Structure

Typical repository structure:

engine/  
experiments/  
labs/  
gyms/  
docs/

Meaning:

engine → core infrastructure  
experiments → runnable visual modules  
labs → concept clusters  
gyms → learning tracks  
docs → conceptual documentation  

The code lives primarily in experiments and engine.

Labs and Gyms provide conceptual organization.

---

# Adding New Ideas

When a new concept appears:

1. define the concept  
2. design a visual experiment  
3. implement or scaffold the experiment  
4. update the experiment registry  
5. update concept coverage if needed  
6. optionally link the experiment to labs  
7. optionally link labs to gyms  

Avoid redesigning the entire taxonomy.

---

# Refactoring Philosophy

Refactoring should follow a small-step approach.

Guidelines:

- keep the build working
- make incremental changes
- preserve behavior when possible
- separate architectural changes from feature changes
- explain intent before major restructuring

Prefer Martin Fowler style refactoring:

expand → migrate → contract

---

# Visual Priority

When choosing between tasks, prefer the one that:

1. produces a clearer visual result  
2. teaches a reusable concept  
3. strengthens shared engine infrastructure  
4. avoids unnecessary restructuring  

---

# Output Convention

Generated visual artifacts should be written to predictable paths.

Example:

outputs/svg/<experiment_name>/latest.svg

Output directories should not clutter the source tree.

---

# Long-Term Vision

Gym Engine should become:

- a visual learning system  
- a simulation playground  
- an AI experimentation platform  
- a portfolio of technical visualizations  
- a personal research lab  

The project grows by adding experiments and improving shared infrastructure.

The taxonomy (Concepts, Labs, Gyms) helps organize the learning journey but should remain flexible.

---

# Final Mental Model

A helpful analogy:

Concepts = ideas  
Experiments = exercises  
Labs = workstations  
Gyms = training programs  
Engine = the facility  

Code implements experiments.

Documentation organizes learning.

Both evolve together without becoming the same thing.

---

# Recommended File Placement

Save this document as:

docs/project-guide.md

Then add this near the top of AGENTS.md:

For a full explanation of the project architecture see:

docs/project-guide.md

This ensures both humans and agents always know where the system overview lives.

---

# Practical Startup Prompt for Codex

When starting a new Codex session, use:

Before making changes, read:

- AGENTS.md  
- docs/project-guide.md  
- docs/ontology.md  
- docs/experiment-registry.yaml  
- docs/concept-coverage.yaml  
- docs/context.md  
- docs/concept-map.md  
- docs/first-experiments.md  
- all files under gyms/  
- all files under labs/  

Then summarize:

- what a Concept is  
- what an Experiment is  
- what a Lab is  
- what a Gym is  
- how they relate  
- what structural changes are forbidden  

Do not modify code until the summary is correct.

---

# Why This Document Matters

This file is the project compass.

When things get confusing, ask:

- Does this respect the ontology?
- Does this add a good experiment?
- Does this improve visual learning?
- Does this avoid unnecessary restructuring?

If yes, it is probably the right direction.

# Prompts

Reconfigure

```
Before making any changes, read:

AGENTS.md
docs/project-guide.md
docs/ontology.md
docs/experiment-registry.yaml
docs/concept-coverage.yaml
docs/context.md
docs/concept-map.md
docs/first-experiments.md
all files under gyms/
all files under labs/

Then summarize:

• what a Concept is  
• what an Experiment is  
• what a Lab is  
• what a Gym is  
• how they relate  
• what structural changes are forbidden  

Do not write code yet.
```

---Test---

# Gym Engine Agent Understanding Test

This test verifies whether an AI agent truly understands the Gym Engine architecture and ontology.

The goal is to ensure the agent respects the system design:

Concept → Experiment → Lab → Gym

Experiments are the atomic runnable units of the system.

Labs and Gyms are taxonomy layers used for conceptual organization.

Experiments may belong to multiple Labs and multiple Gyms.

The repository should grow primarily by **adding experiments**, not by restructuring the taxonomy.

---

# The Test Prompt

Give the agent the following prompt in a new session:

```
A learner using Gym Engine becomes curious about modeling plant growth.

Explain how this concept should be added to the repository.

Your answer must include:

1. the Concept that should be introduced
2. the Experiment that should be created
3. whether a new Lab is needed
4. which Gyms the experiment belongs to
5. what documentation files should be updated

Important constraints:

- do NOT restructure existing folders
- do NOT redesign the ontology
- experiments remain the atomic unit
```

---

# Correct Answer (Example)

A correct answer should look roughly like the following.

### Concept

Introduce a concept related to procedural biological growth.

Example concepts:

- procedural_growth
- plant_growth
- branching_growth

This concept represents algorithmic systems that simulate how plants or branching structures grow.

---

### Experiment

Create a new experiment that visualizes plant growth.

Example experiment names:

- plant_growth_lsystem
- plant_growth_space_colonization
- branching_growth_simulation

The experiment should:

- produce visible plant-like structures
- expose adjustable parameters such as branching angle, growth rate, and recursion depth
- run independently like other experiments

---

### Lab

Determine whether the experiment fits inside an existing lab.

Possible options:

Use an existing lab:

- lsystem-lab

or introduce a new lab if needed:

- procedural-growth-lab

Labs are conceptual groupings of related experiments.

They do not own code and do not require restructuring existing experiments.

---

### Gyms

The experiment should appear in multiple gyms because the concept overlaps disciplines.

Possible gyms:

Algorithms & Geometry Gym  
- because L-systems and recursive branching structures are algorithmic geometry

Emergence Gym  
- because plant structure emerges from simple rules

Simulation Gym  
- if growth is simulated over time

This demonstrates the design principle that experiments can belong to multiple gyms.

---

### Documentation Updates

After adding the experiment, update the documentation that tracks conceptual coverage.

Update:

docs/experiment-registry.yaml

Add an entry linking the experiment to its concepts, labs, and gyms.

Example:

```yaml
plant_growth_lsystem:
  concepts:
    - procedural_growth
    - recursion

  labs:
    - lsystem-lab

  gyms:
    - algorithms-geometry
    - emergence
```

Also update:

docs/concept-coverage.yaml

Add or expand coverage for the procedural_growth concept.

Example:

```yaml
procedural_growth:
  coverage: low
  experiments:
    - plant_growth_lsystem
```

---

# Key Signals of a Correct Understanding

The agent's explanation should clearly indicate:

- Experiments are the atomic runnable units.
- Labs group related experiments conceptually.
- Gyms group labs into broader training disciplines.
- Experiments may belong to multiple labs and gyms.
- The system grows by adding experiments rather than restructuring folders.

---

# Signs the Agent Did NOT Understand

Incorrect answers may include suggestions such as:

- creating a new "Plant Gym"
- moving experiments into gym directories
- reorganizing the repository structure
- creating rigid course sequences

These indicate the agent did not correctly ingest the ontology.

If this happens, instruct the agent to reread:

- docs/project-guide.md
- docs/ontology.md
- docs/context.md

and repeat the test.

