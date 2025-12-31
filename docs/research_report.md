HCMUS Fishpond Water Quality (Pilot Study) — Research Report
1. Project overview

This pilot study documents baseline water-quality conditions in the HCMUS fishpond using repeatable in-situ measurements and structured photo/video evidence. The project is designed as a foundational dataset and workflow template for future, deeper studies (e.g., multi-depth sampling, turbidity quantification, expanded parameters).

Primary focus: water clarity/turbidity (qualitative proxy) and core field parameters (pH, EC, temperature).
Key principle: traceability — every measurement session is linked to time-stamped evidence photos/videos.

2. Study site

Location: HCMUS fishpond (campus pond).
The pond is selected as a safe, accessible, and controlled starting environment for a first independent research project.

3. Objectives

Establish a repeatable sampling and measurement protocol suitable for a first-year pilot study.

Produce a traceable baseline dataset of pH, EC, and temperature for multiple sampling points.

Document water clarity differences using standardized photo comparisons (turbidity proxy).

Build a research-grade portfolio (data + evidence + documentation) for future expansion.

4. Sampling design
4.1 Sampling depth

Depth: ~10 cm (surface layer)

Rationale: feasible with current equipment; minimizes disturbance from bottom sediment while keeping protocol consistent.

4.2 Sampling points

Three sampling points (P1/P2/P3) positioned around the pond (conceptually 3 vertices around a circular perimeter).

4.3 Sample IDs and sessions

Samples are labeled S01–S09 (fishpond samples), with optional controls:

Tap Water (TW): reference clarity baseline

Blank (BLK): handling/clean-container reference

Each fieldwork date includes repeated rounds:

R1 / R2 / R3: repeated collection/measurement rounds within a session plan (with consistent timing discipline).

5. Materials & instruments

Clean HDPE 500 mL bottles (pre-rinsed with tap water before field use).

Portable meters for:

pH

EC (µS/cm)

Temperature (°C)

Camera documentation (photos/videos) used as evidence and turbidity proxy comparison.

6. Field protocol (in-situ)

Prepare labeled bottles for the planned set (e.g., three bottles per session baseline plan).

Collect pond water at ~10 cm depth at designated sampling points.

Perform in-situ measurements:

record pH, EC, temperature

Repeat readings per round:

multiple rounds are taken to capture within-session variability and improve reliability.

Capture evidence photos:

bottle labels, sampling setup, meter readings on screen, and comparative clarity images.

7. Turbidity / water clarity assessment (qualitative proxy)

Because NTU turbidity instrumentation is not yet available, water clarity is assessed using photo-based proxy comparisons, following a consistent approach:

Compare fishpond samples against Tap Water (TW) under similar lighting/background conditions.

Use a standardized “lineup” approach when possible (multiple bottles in one frame).

Record notable observations (e.g., visible suspended particles, sediment presence, “worm-like” soil clumps, bottom deposits).

Important note: This turbidity assessment is qualitative and should be treated as a pilot proxy, not a calibrated turbidity measurement in NTU.

8. Data management & traceability
8.1 Repository structure

data/measurements/ — primary quantitative dataset (spreadsheet) + dataset schema README

data/photos/ — photo evidence grouped by session (and/or R1–R3)

videos/ — video evidence (if included)

docs/ — reports/PDF deliverables

images/ — selected key figures for quick reading (recommended)

8.2 Traceability rule

Each measurement record (row) should be traceable to:

a session date

a round label (R1/R2/R3)

a sample ID (Sxx or control)

and supporting photo/video evidence

9. Quality assurance / quality control (QA/QC)

Label discipline: every bottle labeled and photographed.

Time traceability: timestamps recorded via photo metadata / captured screens.

Controls: tap water and blank container used to contextualize clarity and handling.

Repeat rounds: repeated measurements reduce “one-off reading bias” and reveal variability.

Evidence-first approach: unusual observations are immediately documented.

10. Results (reporting format)

This pilot report recommends presenting results in two layers:

10.1 Quantitative layer (from spreadsheet)

pH, EC, temperature per sample and per round
Suggested summaries:

mean/min/max per sample (S01–S09)

comparisons across sampling points (P1/P2/P3)

within-session variability across R1–R3

10.2 Evidence layer (from photos/videos)

key clarity comparisons (TW vs fishpond samples)

visible sediment differences across sample groups

notable anomalies captured consistently

(Optional) Provide 4–8 “key figure” images in images/ and embed them in README/report for fast comprehension.

11. Discussion (pilot interpretation)

The project’s main strength is process integrity: repeat rounds + consistent labeling + evidence traceability.

Photo-based turbidity proxy is a reasonable pilot method when properly disclosed as qualitative.

The dataset and workflow provide a scalable base for:

deeper sampling (e.g., 10 cm vs 40 cm vs 80 cm),

true turbidity measurement (NTU),

additional parameters (DO, ORP, TDS, ammonia/nitrate, etc.),

seasonal/diurnal comparisons.

12. Limitations

Depth limited to ~10 cm (surface layer only).

Turbidity is qualitative proxy, not NTU-calibrated.

Potential lighting/background variability can affect photo comparisons.

Pilot scale (limited sessions) — not yet a long-term monitoring dataset.

13. Next steps

Add a turbidity sensor (NTU) or standardized turbidity tube method.

Expand to multi-depth sampling (10/40/80 cm) with a DIY sampling pole if needed.

Consolidate sessions into a single tidy dataset (CSV + data dictionary).

Add simple analysis notebook (Python) for:

descriptive stats,

plots,

outlier checks,

repeatability metrics.

14. How to cite / use

If referencing this pilot project, cite as:
HCMUS Fishpond Water Quality (Pilot Study), Harry Vo (2025–2026).
Repository includes raw evidence, dataset, and documentation for traceability.
