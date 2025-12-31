# HCMUS Fishpond Water Quality (Pilot Study)
**Field sampling + repeated in-situ measurements + visual turbidity evidence**  
**Location:** Fish pond (faculty area), HCMUS Campus 2, Vietnam (GMT+7)  
**Collector:** Harry Vo (solo project)  
**License:** MIT

---
## Research report
- Full report (pilot): `docs/research_report.md`
- Presentation (PDF): `docs/2025-12-31_HCMUS_Fishpond_Water_Quality_Presentation_Pdf.pdf`
- Preliminary analysis (PDF): `docs/2025-30-12_Round_2-3_Analysis_HCMUS_Fishpond_v2.pdf`
---
## Quick map
- 📊 Measurements (dataset): `data/measurements/`
- 🖼️ Photo evidence (traceability): `data/photos/`
- 📄 Research report (pilot methods + limitations): `docs/research_report.md`
- 🎞️ Media (images/videos): `images/` and `videos/`
- 📑 Slides / PDFs: `docs/`
---

## 0) What this repository is
This repository documents my **first end-to-end environmental fieldwork pilot**, including:
- **Sampling design** (3 points around the pond, surface water ~10 cm)
- **Repeated in-situ measurements** (pH, EC/TDS, temperature)
- **Evidence chain** (timestamped photos + device-screen photos + videos)
- **Dataset** (Excel measurements) and **project communication** (slides/report PDFs)

The focus of this pilot is **traceability + reproducibility**: every important step (sampling → labeling → measurement) is supported by media evidence.

---

## Table of contents
- [1) Research question](#1-research-question)
- [2) Study site](#2-study-site)
- [3) Definitions (Session vs Round)](#3-definitions-session-vs-round)
- [4) Sampling design](#4-sampling-design)
- [5) Instruments & measurement protocol](#5-instruments--measurement-protocol)
- [6) Quality assurance (QA/QC)](#6-quality-assurance-qaqc)
- [7) Turbidity / visual clarity comparison](#7-turbidity--visual-clarity-comparison)
- [8) Data dictionary](#8-data-dictionary)
- [9) Repository structure](#9-repository-structure)
- [10) How to reproduce this pilot (step-by-step)](#10-how-to-reproduce-this-pilot-step-by-step)
- [11) Limitations](#11-limitations)
- [12) Future work (Phase 2)](#12-future-work-phase-2)

---

## 1) Research question
**Primary question (pilot):**  
How do **basic in-situ water parameters** (pH, EC/TDS, temperature) and **turbidity-related visual indicators** vary:
1) **within a session** (repeated rounds over time), and  
2) **across sessions** (multi-date visits),  
at the HCMUS Campus 2 fish pond?

This is a **pilot/baseline study** to establish a clean workflow and an initial dataset for future expansion (deeper sampling, more parameters, automated logging, and quantitative turbidity/DO sensors).

---

## 2) Study site
- **Site name:** Fish pond (faculty area) – HCMUS Campus 2
- **Country/City:** Vietnam (GMT+7)
- **Sampling depth:** Surface water (~10 cm)
- **Sampling layout:** 3 sampling points around the pond perimeter (approximately spaced around the pond)

> Site context and timestamps are documented by photos in the session folders (see [Repository structure](#9-repository-structure)).

---

## 3) Definitions (Session vs Round)
To avoid ambiguity, this repository uses:

### Session (field visit date)
A **Session** is one field visit date with a new set of bottles/samples:
- **Session 1:** 2025-12-14 → Sample01–Sample03
- **Session 2:** 2025-12-21 → Sample04–Sample06
- **Session 3:** 2025-12-28 → Sample07–Sample09

### Round (repeated measurement inside a session)
A **Round** is a repeated measurement cycle for the same bottles in the same session:
- **Round 1 / Round 2 / Round 3**
- Target interval: **~30 minutes** between rounds (timestamped via photos and logs)

This design supports:
- short-term stability checks (within-session)
- multi-date comparison (across sessions)

---

## 4) Sampling design
### 4.1 Number of samples
- **3 bottles per session** (3 sampling points → 3 bottles)
- Total pilot coverage: **9 samples** (Sample01–Sample09)

### 4.2 Bottle specification & preparation
- **Bottle type:** 500 mL HDPE
- **Pre-rinse:** bottles rinsed twice with tap water before field use (future upgrades may use distilled-water rinse for stricter QA)

### 4.3 Controls (baseline references)
To support visual comparison and traceability:
- **Tap-water control (TW):** clarity baseline reference
- **Blank container control (CTR):** container/background baseline reference

---

## 5) Instruments & measurement protocol
### 5.1 Parameters measured
- **pH** (dimensionless)
- **EC / TDS** (meter-mode dependent; unit recorded per reading)
- **Temperature** (°C)

### 5.2 Instruments (current pilot)
- pH pen (ATC)
- Handheld EC/TDS meter (mode-dependent)
- Optional field items: gloves, tape, label paper, cups

### 5.3 Measurement protocol (per sample, per round)
For each bottle in each round:
1) Rinse probe between samples (to reduce carryover)
2) Insert probe and wait until reading stabilizes
3) Record:
   - value + unit
   - meter mode (EC or TDS) if applicable
   - timestamp (via log and/or device-screen photos)
4) Take device-screen photo (evidence) when possible

---

## 6) Quality assurance (QA/QC)
This pilot prioritizes **transparent evidence** over “perfect instruments”.

### QA/QC checklist used
- [x] **Immediate labeling at collection** (sample ID + date/time + collector)
- [x] **Repeated rounds** (R1–R3 per session)
- [x] **Probe rinse between samples**
- [x] **Device-screen photos** for traceability
- [x] **Controls included** (TW, CTR) for baseline comparison
- [x] **Session folders** organized by date

### What QA/QC means here
- **Traceability:** each dataset row can be linked to a real bottle/sample and documented time
- **Reproducibility:** another person can repeat the workflow using the same steps

---

## 7) Turbidity / visual clarity comparison
This repository uses a **qualitative turbidity approach** supported by photos and videos.

### 7.1 How turbidity is interpreted in this project
Turbidity/clarity is assessed through:
- **Cloudiness / loss of transparency**
- **Suspended particles** visible in side view
- **Sediment presence and settling** visible in bottom view
- **Resuspension behavior after gentle shaking** (video evidence)

### 7.2 Controls for baseline
- **Tap-water control (TW):** baseline “clear”
- **Blank container control (CTR):** confirms container/background is not misleading

### 7.3 Reproducible visual comparison workflow
1) Use **lineup photos** (multiple bottles in one frame) to compare clarity/color
2) Use **bottom-view photos** to evaluate sediment visibility and settling patterns
3) Use **label close-ups** to guarantee sample ID traceability
4) Use **shake-test videos** to observe how quickly particles resuspend and settle

> Note: These comparisons are **qualitative evidence** (not calibrated NTU). Any numeric conclusion should be based on the measurement dataset.

---

## 8) Data dictionary
### 8.1 Dataset location
- Measurements (Excel): `data/measurements/2025-12-14_pilot_measurements.xlsx`

### 8.2 Expected row meaning
Each row typically represents:
- one **Sample ID**
- one **Session date**
- one **Round**
- recorded pH + EC/TDS + temperature
- notes / unit / meter mode (when relevant)

> If you extend this dataset, keep consistent columns for Session, SampleID, Round, and Units.

---

## 9) Repository structure
### Core folders
- `data/measurements/` → numeric dataset (Excel/CSV)
- `data/photos/` → field photo evidence organized by session
- `data/videos/` (or `videos/`) → shake-test and supporting clips
- `notes/` → field log / narrative notes
- `arduino/` → Arduino logger prototype (future automation)

### Recommended session/media layout (clean & scalable)
data/
  photos/
    2025-12-14_session1_S01-03_R1-R3/
      README.md
      *.jpg
    2025-12-21_session2_S04-06_R1-R3/
      README.md
      *.jpg
    2025-12-28_session3_S07-09_R1-R3/
      README.md
      *.jpg
  videos/
    2025-12-28_shake-tests/
      README.md
      *.mp4
  media/
    2025-12-28_labels-controls/
      README.md
      *.jpg
    2025-12-28_turbidity-comparisons_S01-09/
      README.md
      *.jpg
docs/
  slides/
  reports/

> Your repository may currently use `images/` and `videos/` at root. That is fine—just keep links consistent.

---

## 10) How to reproduce this pilot (step-by-step)
### Step 1 — Prepare
- Label templates (Sample ID + date/time + collector)
- Pre-rinse bottles (2x tap water in this pilot)
- Prepare meters (pH pen + EC/TDS meter)

### Step 2 — Sampling (Session)
- Go to 3 pond perimeter points
- Collect **surface water (~10 cm)**
- Label immediately at collection site
- Take sampling + label close-up photos

### Step 3 — Measurement (Rounds)
- Round 1: measure pH + EC/TDS + temp for each sample
- Wait ~30 minutes
- Round 2: repeat
- Wait ~30 minutes
- Round 3: repeat
- Rinse probes between samples and record units/mode

### Step 4 — Evidence & documentation
- Save photos by session folder
- Save shake-test videos (if recorded)
- Update dataset file
- Update notes (field log)
- Update README links

---

## 11) Limitations
- Turbidity is **qualitative** (no NTU sensor in this pilot)
- pH/EC/TDS meters may require calibration standards for higher accuracy (planned for Phase 2)
- Only surface depth (~10 cm) sampled in this phase
- Limited parameters (no DO, no ORP, no ammonia/nitrate, etc.)

---

## 12) Future work (Phase 2)
- **Deeper sampling** (e.g., 10 cm vs 40 cm vs deeper) with a sampling pole
- Add quantitative sensors: turbidity (NTU), DO, etc.
- Improve calibration protocol (pH buffers 4/7/10; EC standard solution)
- Convert dataset to CSV + Python analysis (plots, trends, session comparison)
- Expand Arduino logger into automated time-series monitoring
- Add a short “Results snapshot” section (pilot findings + charts) once analysis is complete
