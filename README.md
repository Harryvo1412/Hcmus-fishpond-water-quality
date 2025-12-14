# Hcmus-fishpond-water-quality

Pilot field sampling & basic water quality measurements (pH, EC/TDS, temperature)  
at **HCMUS Campus 2 fish pond**.

This repository contains **field photos and initial measurements** from a pilot
sampling session and will be expanded with future sampling campaigns.

## Data & folders
- **Measurements (Excel):** `data/measurements/2025-12-14_pilot_measurements.xlsx`
- **Field log:** `notes/field_log_2025-12-14.md`
- **Photos (current):** `2025-12-14/measure 3 water samples 3 times/`
- **Photos (planned cleanup):** `data/photos/2025-12-14_pilot/`
- **Arduino logger:** `arduino/water_quality_logger_01/`
- 
---
## 1) Study site
- **Site name:** Fish pond (Faculty area) – HCMUS Campus 2
- **Country/City:** Vietnam (GMT+7)
- **Sampling depth:** Surface water (~10 cm)
 
> Note: Location and sampling context are documented via timestamped photos
> currently stored in `2025-12-14/measure 3 water samples 3 times/`.
> (Planned cleanup) Move to `data/photos/2025-12-14_pilot/`.


---
## 2) Sampling design (current phase)
**Session:** 2025-12-14 (Pilot)

- **Number of samples:** 3 bottles  
  - Sample01, Sample02, Sample03
- **Measurements per sample:** 3 rounds  
  - Round1 / Round2 / Round3  
  - Each round is separated by a time gap as documented in photos and logs
- **Measured parameters:**
  - pH
  - EC / TDS (depending on meter mode)
  - Temperature

---
## 3) Instruments
- **pH pen** (ATC)
- **TDS/EC meter** (handheld)
- *(Optional field items)* gloves, tape, label paper, plastic cups

> Important: EC/TDS meters may display either **EC (µS/cm)** or **TDS (ppm)**
> depending on the selected mode.  
> In this project, **every record explicitly includes both unit and meter mode**.

> All probes were rinsed between samples, and readings were recorded
> after signal stabilization.

---
## 4) Field workflow (what was done)
1. Prepare clean sampling bottles and label templates.
2. Collect surface water (~10 cm depth) for each bottle.
3. Label each bottle immediately at the sampling site  
   (Sample ID, location, date, time, collector).
4. Measure pH, EC/TDS, and temperature in **multiple rounds**.
5. Document each step with photos  
   (sampling, labelling, instrument readings).

---
## Future work
- Multi-day sampling to assess temporal variation
- Increase sampling frequency and number of samples
- Expansion to additional parameters (e.g. DO, turbidity) if instruments are available
- Basic data analysis and visualization (time series, comparison between samples)

---
## 5) Data files & folder structure

Recommended structure:

```text
Hcmus-fishpond-water-quality/
│
├── README.md
├── LICENSE
│
├── data/
│   ├── photos/
│   │   ├── 2025-12-14_HCMUS-FishPond_Sample01_FieldSampling.jpg
│   │   ├── 2025-12-14_HCMUS-FishPond_Sample01_pH_Round1.jpg
│   │   ├── 2025-12-14_HCMUS-FishPond_Sample01_EC-Temp_Round1.jpg
│   │   └── ...
│   │
│   └── measurements/
│       └── 2025-12-14_pilot_measurements.csv
│
└── notes/
    └── field_log_2025-12-14.md



