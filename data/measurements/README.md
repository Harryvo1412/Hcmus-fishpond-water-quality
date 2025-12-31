# Measurements Dataset (Pilot)

This folder contains the **primary quantitative dataset** for the HCMUS Fishpond Water Quality pilot study.

## Files
- **2025-12-14_pilot_measurements.xlsx**
  - Pilot measurements table (Session 1 baseline).
  - Includes core parameters: **pH**, **EC**, **temperature**, and **turbidity proxy/observations** (if recorded).

## Data structure (recommended)
Each row represents one measurement instance.
Suggested minimum columns:
- `datetime_local` (GMT+7)
- `session` (e.g., 2025-12-14)
- `round` (R1/R2/R3)
- `sample_id` (S01–S09, controls if any)
- `sampling_point` (P1/P2/P3)
- `depth_cm` (e.g., 10)
- `pH`
- `EC_uS_cm`
- `temp_C`
- `notes` (odor, sediment, abnormal observations)

## Notes
- This dataset is designed to be **traceable** to photo/video evidence stored under `data/photos/`.
- Future sessions (2025-12-21, 2025-12-28) will be appended as additional files or merged into a single consolidated spreadsheet.
## Traceability
- Photo evidence (Session 1): [data/photos/2025-12-14_pilot_in-situ_R1-R3](../photos/2025-12-14_pilot_in-situ_R1-R3)
