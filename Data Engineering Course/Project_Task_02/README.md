# NYC Taxi Analytics Pipeline: Pandas Transformation and Relational Logic

Welcome to the **NYC Taxi Analytics Pipeline** project repository! This project is designed as a structured exercise to master data engineering pipelines, data cleaning, relational joins, aggregations, pivoting, and melting using **Pandas** in Python / Jupyter Notebooks.

## 📌 Project Overview
As a Data Engineer for a mobility analytics team, you are tasked with building a robust data transformation pipeline to analyze taxi demand, revenue, pickup hotspots, and borough-level patterns using real-world NYC Taxi and Limousine Commission (TLC) trip data from January and February 2024. 

Production data often contains noise and anomalies—such as negative trip distances, zero-amount charges, or missing location lookups. This pipeline cleans, joins, and aggregates raw data to deliver structured outputs and insights for downstream dashboards and business analysts.

---

## 🛠️ Tech Stack
* **Language:** Python 3
* **Libraries:** 
  * `pandas` (for data cleaning, transformation, and aggregations)
  * `pyarrow` / `fastparquet` (for reading compressed Parquet files efficiently)
* **Environment:** Jupyter Notebook / Google Colab

---

## 📊 Dataset & Schema
The project works with two main datasets: TLC Yellow Taxi Trip Records (Jan/Feb 2024) and the Taxi Zone Lookup CSV.

### 1. TLC Yellow Taxi Trip Records (Parquet files)
Contains individual trip logs, of which a subset of columns is loaded for analysis:
* `tpep_pickup_datetime` (Datetime): The date and time when the meter was engaged.
* `tpep_dropoff_datetime` (Datetime): The date and time when the meter was disengaged.
* `PULocationID` (Integer): TLC Taxi Zone in which the taximeter was engaged.
* `DOLocationID` (Integer): TLC Taxi Zone in which the taximeter was disengaged.
* `passenger_count` (Float): The number of passengers in the vehicle (driver-entered value).
* `trip_distance` (Float): The elapsed trip distance in miles shown by the taximeter.
* `fare_amount` (Float): The time-and-distance fare calculated by the meter.
* `total_amount` (Float): The total amount charged to passengers (excluding cash tips).
* `payment_type` (Integer): A numeric code signifying how the passenger paid (e.g., Credit Card, Cash, etc.).

### 2. Taxi Zone Lookup (`taxi_zone_lookup.csv`)
Maps location IDs to real NYC boroughs and zones:
* `LocationID` (Integer, Primary Key): Unique identifier matching `PULocationID` and `DOLocationID`.
* `Borough` (Text): The borough group (e.g., Manhattan, Queens, Brooklyn).
* `Zone` (Text): The specific neighborhood/zone name.
* `service_zone` (Text): The zone designation type.

---

## 🚀 Learning Goals & Task Breakdown

The pipeline is divided into the following sequential steps:

### Part A: Loading & Schema Inspection
* Load January and February 2024 Parquet trip records using projection (loading only required columns to save system memory).
* Load the CSV Taxi Zone lookup.
* Concatenate both months into a single master dataframe.
* Inspect data integrity using `.head()`, `.info()`, `.describe()`, `.shape`, and count missing values.

### Part B: Cleaning & Feature Engineering
* Filter out invalid records using data quality checks:
  * Remove trips where `total_amount <= 0`
  * Remove trips where `trip_distance <= 0`
  * Remove trips where `trip_minutes <= 0`
* Derive temporal columns:
  * `pickup_month` (Extract month integer: 1 = Jan, 2 = Feb)
  * `pickup_date` (Extract YYYY-MM-DD)
  * `pickup_hour` (Extract hour integer: 0–23)
  * `trip_minutes` (Calculate duration: `(dropoff_time - pickup_time)` in minutes)

### Part C: Relational Joins & Join Quality
* Perform left joins twice against the Taxi Zone Lookup:
  1. Map `PULocationID` to `LocationID` to append `pickup_borough` and `pickup_zone`.
  2. Map `DOLocationID` to `LocationID` to append `dropoff_borough` and `dropoff_zone`.
* Print a **Join Quality Report** to log and verify:
  * Raw pre-cleaned row count.
  * Cleaned row count.
  * Count of unmatched pickup/dropoff zones (ensuring lookup coverage).
  * Final row count.

### Part D: Groupby & Analytical Aggregations
* **Zone Summary:** Group by `pickup_borough` and `pickup_zone` to aggregate metrics:
  * Trip count, total revenue, average revenue, average distance, minimum distance, and maximum distance.
* **Payment Summary:** Map `payment_type` ID to labels (1 ➡️ Credit Card, 2 ➡️ Cash, etc.) and group by `pickup_month` and payment label to aggregate trip count, total/average fare, and min/max fare.

### Part E: Pivoting & Melting (Dashboard-Ready Output)
* **Pivot Table:** Transform trip data into a wide-format matrix containing hourly revenue (`pickup_hour` index) by pickup borough (columns).
* **Melt:** Unpivot (melt) the wide matrix back into a long format database table (`pickup_hour`, `pickup_borough`, `revenue`) optimized for BI tools and dashboards.

---

## 📊 Required Pipeline Outputs
The pipeline exports four clean CSV output files to the workspace:
1. `pickup_zone_summary.csv` — Ranking of pickup zones with aggregated revenue and distance metrics.
2. `borough_hour_pivot.csv` — Hourly revenue breakdown by pickup borough in wide format.
3. `borough_hour_long.csv` — Hourly revenue by pickup borough in long (melted) format.
4. `payment_month_summary.csv` — Payment method behavior aggregated per month.

---

## 📝 Core Business Questions Answered
The notebook calculates precise answers with statistical evidence for these business questions:
1. **Highest Revenue Pickup Zone:** Which zone generated the highest total revenue?
2. **Busiest Borough:** Which pickup borough is busiest by trip count?
3. **Peak Hour:** Which hour of the day has the highest revenue in Manhattan?
4. **Top Routes:** What are the top 10 pickup ➡️ dropoff routes by overall trip count?
5. **Monthly Trend:** Did total revenue increase or decrease from January to February?

---

## 💡 Key Business Insights Extracted
Based on the data transformation, the pipeline reveals the following 3 key insights:
* **Insight 1: Manhattan Dominates Revenue** — JFK Airport and Midtown zones consistently generate the highest per-trip revenue. Premium zones near airports and business districts should be prioritized for driver allocation during peak hours.
* **Insight 2: Evening Rush is the Revenue Peak** — Hours 17–20 (5 PM – 8 PM) show the highest revenue in Manhattan, indicating strong demand during the evening commute. Surge pricing and driver incentives in this window can maximize earnings.
* **Insight 3: Credit Card is the Dominant Payment Method** — Over 70% of revenue comes from credit card payments. Optimizing the card payment UX and offering rewards for card users can further reduce cash handling costs and improve revenue tracking accuracy.

---

## 🏃 Getting Started

### Prerequisites
Make sure you have Python 3 installed, along with the necessary data processing libraries:
```bash
pip install pandas pyarrow fastparquet
```

### Running the Pipeline
1. Open the Jupyter Notebook:
   ```bash
   jupyter notebook NYC_Taxi_Analytics_Pipeline.ipynb
   ```
2. Execute the setup cells to load the libraries and set up URLs pointing to the yellow taxi parquet files.
3. Run through each pipeline cell sequentially to clean the datasets, execute relational merges, construct aggregations, and export the output CSV files.
4. Review the printed answers to the Business Questions and verification reports.
