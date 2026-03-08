# AGENTS.md

This repository contains Gym Engine, a graphics-driven experimental learning system.

Agents working in this repository should understand and follow the rules below.

---

## Mission

Build a modular visual experimentation platform for learning:

- mathematics
- simulation
- AI and learning systems
- emergence and complex systems
- algorithms and geometry

through interactive graphical experiments.

The project is designed to teach difficult concepts through:
- visible behavior
- parameterized experimentation
- repeated exposure across multiple conceptual contexts

---

## Required Context Files

Before proposing code changes or restructuring the repository,
agents should read the following files to understand the project
architecture and ontology:

- docs/project-guide.md
- docs/ontology.md
- docs/experiment-registry.yaml
- docs/concept-coverage.yaml
- all files under gyms/
- all files under labs/

These documents define the conceptual architecture of the project.

Agents must understand the following ontology before making changes:

Concept → Experiment → Lab → Gym

Definitions:

Concept  
An intellectual idea or skill being explored (ex: gradients, recursion).

Experiment  
The atomic runnable code unit that produces visual output.

Lab  
A focused conceptual grouping of related experiments.

Gym  
A broader training discipline that groups Labs.

Important structural rules:

- Experiments are implemented in code.
- Labs and Gyms are taxonomy layers, not code ownership.
- Experiments may belong to multiple Labs.
- Labs may belong to multiple Gyms.
- Do not reorganize source code so Gyms or Labs own experiments.
- Prefer adding experiments rather than restructuring the taxonomy.

If these rules are unclear, read:

docs/project-guide.md

---

## Core Rule

Every meaningful module should produce visible feedback, or directly support something that does.

Examples of valid visible outputs:
- curves
- meshes
- fields
- terrains
- particles
- agents
- evolving simulations
- optimization paths
- emergent patterns
- search frontiers
- branching growth systems

Prefer work that produces something observable on screen.

If a task does not directly produce visual feedback, it should usually support a system that will.

---

## Project Philosophy

This project is not a traditional course repository.

It is a growing collection of visual experiments.

The repository is intended to function as:
- a learning system
- an experimentation engine
- a research playground
- a portfolio of visual technical studies

Concepts should be allowed to appear across multiple Gyms and Labs.

Do not force rigid disciplinary boundaries.

Examples:
- gradients belong to both Math and AI
- reaction-diffusion belongs to Math, Simulation, and Emergence
- pathfinding belongs to Algorithms and AI
- L-systems belong to Algorithms, Emergence, and procedural simulation

Overlap is expected and desirable.

---

## Critical Project Ontology

This project has four conceptual layers:

- **Concept** = idea or muscle being trained
- **Experiment** = atomic runnable code unit
- **Lab** = focused conceptual grouping of related experiments
- **Gym** = broader conceptual training collection

### Definitions

#### Concept
A Concept is an idea, skill, or mental muscle being trained.

Examples:
- gradients
- interpolation
- recursion
- pathfinding
- diffusion
- flocking
- optimization

#### Experiment
An Experiment is the atomic runnable unit of the system.

An Experiment:
- is implemented in code
- produces visual output
- teaches one or more Concepts
- may belong to multiple Labs
- may belong to multiple Gyms
- should be runnable independently

#### Lab
A Lab is a focused conceptual grouping of related Experiments.

A Lab:
- groups experiments around a narrower skill or idea
- is taxonomy, not a code ownership container
- may appear in multiple Gyms

#### Gym
A Gym is a broader conceptual training collection.

A Gym:
- groups Labs into a larger learning track
- is taxonomy, not a code ownership container

## Experiment Registry

The file docs/experiment-registry.yaml defines the mapping between:

Concepts → Experiments → Labs → Gyms

Agents should consult this file when:

- adding experiments
- linking experiments to Labs
- linking Labs to Gyms
- reasoning about conceptual coverage

When adding a new experiment, update this registry.

## Concept Coverage Map

The file `docs/concept-coverage.yaml` tracks how well important concepts are covered across experiments, labs, and gyms.

Agents should consult this file when:
- proposing new experiments
- deciding what concept gaps exist
- recommending next work
- judging whether a new experiment has high leverage

Prefer experiments that strengthen weak but important concepts across multiple Gyms.

---

## Hard Structural Rules

- Experiments are implemented in code.
- Experiments are the atomic runnable units.
- Labs and Gyms are taxonomy, not source-code ownership boundaries.
- Experiments may belong to multiple Labs and multiple Gyms.
- Labs may appear in multiple Gyms.
- Do not reorganize source code so Gyms or Labs own experiments.
- Prefer adding or refining Experiments over restructuring taxonomy.
- New curiosity-driven topics should usually be added as new Experiments, then linked into one or more Labs and Gyms.
- Do not assume 1:1 relationships between Experiment, Lab, and Gym.

### Anti-Patterns

Incorrect:
- moving experiments into Gym-owned source trees
- treating Labs as code modules that own experiment implementation
- duplicating experiment logic across multiple Gyms
- restructuring completed work just because a concept overlaps categories

Correct:
- keep experiments as the code-level unit
- keep Labs and Gyms as conceptual structure
- allow overlap freely
- expand by adding experiments and links, not by rewriting taxonomy

---

## Atomic Unit: Experiment

The smallest meaningful implementation unit is the Experiment.

Each Experiment should ideally have:
- a clear name
- a runnable module
- a visible system
- adjustable parameters
- concept tags or explicit conceptual mapping
- a short statement of learning value

Experiments should not be buried inside Gyms.

Gyms and Labs are collections and conceptual views over experiments.

---

## Required Context to Read Before Structural Work

Before making architectural, structural, ontology, taxonomy, or experiment-planning changes, read:

- `docs/ontology.md`
- `docs/context.md`
- `docs/concept-map.md`
- `docs/first-experiments.md`
- all files under `gyms/`
- all files under `labs/`

These files define the conceptual structure of the project.

If the task touches experiment placement, Gym/Lab relationships, or long-term architecture, read those files first.

If there is ambiguity, summarize your understanding before changing code.

---

## Startup Understanding Check

Before making nontrivial structural changes, the agent should be able to correctly summarize:

- what a Concept is
- what an Experiment is
- what a Lab is
- what a Gym is
- how they relate
- what structural changes are forbidden

If this ontology is unclear, resolve that first before coding.

---

## Adding New Concepts

When a new concept is introduced, do not redesign the whole course or engine.

Use this process:

1. define the Concept
2. propose a visual Experiment
3. create or scaffold an Experiment module
4. add conceptual links, tags, or documentation
5. update the concept map if appropriate
6. optionally link the Experiment into one or more Labs
7. optionally link those Labs into one or more Gyms

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
- experiment-first architecture
- backend-agnostic abstractions where useful

Avoid:
- monolithic "do everything" demos
- unnecessary abstraction before a concrete need appears
- hiding important math behind magic helper code
- tightly coupling experiments to each other
- taxonomy-driven source layout where Gyms or Labs own implementation code

---

## Refactoring Style

Prefer Martin Fowler style refactoring:

- make small safe changes
- preserve behavior when possible
- keep the build green
- avoid wide multi-axis rewrites
- expand first, migrate second, contract last
- explain structural intent before making large changes

When a refactor is requested:
- prefer a short sequence of safe steps
- do not combine architecture changes, rendering changes, and behavior changes in one large edit unless explicitly requested

---

## Output Preferences for Agents

When proposing work:
- suggest small safe steps before large implementation
- prefer small working vertical slices
- produce scaffolded experiments early
- make demos interactive when practical
- expose parameters clearly
- optimize for visual payoff and conceptual clarity
- explain how a change fits the Experiment / Lab / Gym model when relevant

Prefer:
- working visual prototypes

over:
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
- export backends such as SVG or debug output

Agents should look for opportunities to reuse core systems across multiple experiments.

---

## Naming Guidance

Use descriptive experiment names, such as:
- `bezier_lab`
- `scalar_fields`
- `contour_gradient_viewer`
- `thermal_erosion`
- `reaction_diffusion`
- `maze_pathfinding`
- `plant_growth_lsystem`

Avoid vague names.

Labs and Gyms should also have descriptive names that reflect learning purpose.

---

## Visual Priority

When choosing between two equally valid tasks, choose the one that:

1. produces a clearer visual result
2. teaches a reusable concept
3. strengthens shared engine infrastructure
4. fits the ontology cleanly
5. avoids unnecessary restructuring

---

## Standard Output Convention

Generated visual outputs should use predictable repo-local paths when practical.

Preferred convention:

- `outputs/svg/<experiment_name>/latest.svg`
- similar structure for future output formats if added later

Generated outputs should not clutter source directories.

---

## Final Rule

This repository should grow by adding Experiments and shared infrastructure, not by repeatedly reorganizing taxonomy.

The code should remain experiment-first.
The conceptual structure should remain Lab- and Gym-driven.
The two should support each other without becoming the same thing.