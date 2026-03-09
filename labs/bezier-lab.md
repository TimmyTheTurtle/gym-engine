# Bézier Lab

This lab explores interpolation and parametric curve construction using Bézier techniques.

## Core Concepts
- linear interpolation
- affine combinations
- parametric curves
- geometric construction
- de Casteljau algorithm

## Example Experiments
- bezier_lab
- bezier_subdivision
- spline_playground
- curve_arc_length

## Visual Outputs
- animated curve construction
- control polygons
- subdivision visualization

## Related Gyms
- Prueitt Mathematics Gym
- Algorithms & Geometry Gym

## Incremental Lesson Plan

### Stage 1 – Control Polygon Intuition
- **Objective:** define linear interpolation, affine combinations, and parameterization before a single curve appears.
- **Activities:** demo point-to-point lerps, visualize weight sliders, and have learners draw control polygons that match given midpoints using `bezier_lab` in its simplest mode.
- **Evidence:** students annotate how each control vertex influences the curve and can predict the midpoint of the curve for a given parameter.

### Stage 1.5 – Matrix Math Warm-Up
- **Objective:** surface why affine transforms and SIMD-friendly matrix math power Bézier calculations.
- **Activities:** compare naïve coordinate updates with batched lerp matrices, plot the same task done with a single multiply-add sequence, and show how the control polygon fits inside the convex hull defined by the transform.
- **Evidence:** learners describe how matrix multiplications pack multiple interpolation steps, and they outline how changing the basis affects the control net geometry.

### Stage 2 – De Casteljau Construction in Motion
- **Objective:** internalize the recursive geometries that generate Bézier curves and understand how intermediate points move.
- **Activities:** step through animated de Casteljau passes, pause-and-inspect each interpolation edge, and record the separation between stages as the parameter sweeps across [0,1].
- **Evidence:** learners can trace a parameter value backward through the construction, explain why the resulting point lies inside the convex hull, and sketch how the intermediate triangles collapse.

### Stage 3 – Curve Subdivision Practice (bezier_subdivision)
- **Objective:** explore how subdivision produces smaller Bézier pieces without altering the global shape, reinforcing refinement and local control.
- **Activities:** split a base curve recursively, compare control hulls at each depth, exaggerate handles to see error between the two halves, and measure the maximum distance between the original curve and its personified halves.
- **Evidence:** learners select a tolerance, apply subdivision until it is met, and justify how the adaptive refinement relates to local curvature.

### Stage 3.5 – Performance Checkpoints
- **Objective:** make learners aware of throughput, cache-friendly layouts, and how the Bézier pipeline maps to multi-core and vectorized execution.
- **Activities:** identify the hot loops of de Casteljau and subdivision, annotate memory strides, and outline how those loops would be split between threads or packed into SIMD lanes when pushed toward real-time rendering.
- **Evidence:** students write short notes or diagrams that spotlight the data dependencies that must stay synchronized and suggest one optimization (e.g., loop tiling, explicit SIMD, or GPU-inspired kernel packing) they would try in the next lab.

### Stage 4 – Arc-Length Reparameterization (curve_arc_length)
- **Objective:** make learners comfortable with the difference between uniform parameter steps and constant-speed traversal along the curve.
- **Activities:** sample the curve at fixed parameter leaps, compute cumulative chord lengths, and then remap the parameter so the moving point travels at steady speed; overlay speed plots and tangent vectors.
- **Evidence:** students explain why naive parameter stepping produces clusters near high-curvature regions, and they can produce a new parameter that equalizes the travel distance per step.

### Stage 5 – Spline Playground (spline_playground)
- **Objective:** connect single-segment Bézier intuition to piecewise and spline systems, focusing on continuity, knot placement, and blending.
- **Activities:** chain multiple Bézier segments, toggle C0/C1/C2 continuity, slide knots or weights, and contrast the localized changes with those from a single control polygon.
- **Evidence:** learners justify when to add knots versus adjusting handles, and they generate a short spline that meets a target shape using only local edits.

### Stage 6 – Reflection & Systems Integration
- **Objective:** prepare learners to carry the Bézier concepts into other labs, considering affine math, CPU performance, and GPU-style thinking as shared tools.
- **Activities:** summarize how Bézier calculations expressed interpolation, matrix transforms, and pacing; map each concept to a future experiment (e.g., tie subdivision to procedural growth or arc-length to optimization); and brainstorm where SIMD/parallel compute could accelerate future visuals.
- **Evidence:** students answer a metacognitive prompt that links Bézier mastery to a concrete lab (e.g., “How will you reuse matrix math from this lab when building a terrain shader?”) and propose one experiment where GPU planning matters.

## Prompt Rounds

### Round 1 – Learning Goals
1. Which of the core concepts (interpolation, affine combinations, parameterization, geometric construction, de Casteljau) should be weighted most heavily for the upcoming session?
2. Do we want learners to discover the convex hull property experimentally or to have it presented up front?
3. Are there assessment checkpoints (e.g., quick quizzes or callouts) you want embedded in the lesson plan?

### Round 2 – Tooling and Experiment Progression
1. Should we pair `bezier_lab` with guided worksheets using the same experiment data to reduce context switching?
2. Would it help to surface metrics (error, curvature) during subdivision so learners can justify stopping the refinement?
3. What artifacts should learners export from `curve_arc_length` (e.g., constant-speed sample data, velocity graphs) to bring into the next stage?

### Round 3 – Extensions and Reflection
1. What conceptual bridges should we draw between Bézier curves and future labs (e.g., splines, parametric surfaces, optimization)?
2. Are there narrative hooks (stories or analogies) that make reparameterization or subdivision feel tangible to learners?
3. What evidence would convince us that students are ready to move from this lab into more advanced curve systems?

### Round 4 – Systems & Performance Hooks
1. Which loop-level optimizations (SIMD packing, cache strides, thread tiling) should we highlight as we walk through de Casteljau and subdivision so that learners note the connections to high-performance computing?
2. Where in the Bézier pipeline should we encourage learners to treat GPU-style thinking (e.g., explicit kernels, buffer swaps) even before we have dedicated experiments?
3. What artifacts (annotated hotspots, data-layout sketches) should learners export so the next lab can build on the same code reasoning?
