# Quick-Commerce Data Engineering: DML and the Basic SELECT Pipeline

Welcome to the **Quick-Commerce Data Engineering** project repository! This project is designed as a student exercise to master SQL Data Manipulation Language (DML), SELECT queries, and data validation pipelines using SQLite and Pandas within Python / Jupyter Notebooks.

## 📌 Project Overview
As a Data Engineer for a quick-commerce company, you are tasked with handling and cleaning incoming customer, order, and payment data. In production environments, data is often messy, containing missing values (NULLs), typos in statuses, orphaned records (invalid foreign keys), and cancelled or test transactions. 

This project demonstrates how to use SQL queries to clean, inspect, filter, and validate database records, culminating in a clean final business report for the analytics team.

---

## 🛠️ Tech Stack
* **Language:** Python 3
* **Database Engine:** SQLite (In-Memory database via python's `sqlite3` library)
* **Data Processing & Display:** Pandas (for executing queries and viewing tabular results cleanly)
* **Environment:** Jupyter Notebook / Google Colab

---

## 📊 Database Schema
The project works with three interrelated tables:

### 1. `customers`
Stores customer profile information.
* `customer_id` (INTEGER, Primary Key): Unique identifier for each customer.
* `customer_name` (TEXT): Name of the customer.
* `city` (TEXT): City where the customer is located.
* `email` (TEXT): Email address (contains NULL values for some users).
* `segment` (TEXT): Customer segment (`premium` or `standard`).

### 2. `orders`
Stores order details and values.
* `order_id` (INTEGER, Primary Key): Unique identifier for each order.
* `customer_id` (INTEGER): Foreign key referencing `customers.customer_id`.
* `order_date` (TEXT): Date of the order (YYYY-MM-DD).
* `amount` (REAL): Total amount of the order (contains NULLs and zero-values).
* `status` (TEXT): Status of the order (e.g., `completed`, `pending`, `cancelled`, and a typo `'complted'`).
* `coupon_code` (TEXT): Code used for discounts (contains NULLs).

### 3. `payments`
Stores transaction and payment method information.
* `payment_id` (INTEGER, Primary Key): Unique identifier for each payment.
* `order_id` (INTEGER): Foreign key referencing `orders.order_id`.
* `payment_status` (TEXT): Status of the payment (`success`, `pending`, `failed`).
* `payment_method` (TEXT): Payment mode (`card`, `upi`, `wallet`).

---

## 🚀 Learning Goals & Task Breakdown

The assignment is divided into five logical parts:

### Part A: DML Tasks (Data Manipulation Language)
*Focuses on inserting, updating, and deleting records safely.*
* 🛡️ **Crucial Production Rule:** Before running any `UPDATE` or `DELETE` query, first run a `SELECT` query with the exact same `WHERE` condition to preview the affected rows.
* **A1:** Insert a single new customer (Anuz from Jaipur, premium segment).
* **A2:** Bulk insert multiple orders using Python's `executemany()`.
* **A3:** Fix the typo status `'complted'` to `'completed'`.
* **A4:** Resolve a missing email address for a specific customer.
* **A5:** Delete cancelled test orders containing a specific coupon code.
* **A6:** Output and verify changes after each operation.

### Part B: SELECT Pipeline Tasks
*Focuses on retrieving and formatting data.*
* **B1:** Review all records in the database.
* **B2:** Filter out unnecessary columns.
* **B3:** Extract unique elements (cities, statuses) using `DISTINCT`.
* **B4 & B5:** Implement column and table aliases (`AS`) for clean, readable queries.
* **B6:** Calculate dynamic columns (e.g., adding a 18% GST tax onto completed orders: `amount * 1.18 AS amount_with_gst`).

### Part C: Filtering Logic Tasks
*Focuses on precision filtering using SQL operators.*
* Implement filters using `AND`, `OR`, `NOT`, `IN`, `BETWEEN` (for numeric values and dates), `LIKE` wildcard matching, and handling missing data with `IS NULL` / `IS NOT NULL`.

### Part D: Data Engineering Validation Queries
*Simulates common data quality checks in ETL/ELT pipelines to flag anomalies.*
* **D1 (Orphan Check):** Find orders referencing a `customer_id` that does not exist in the `customers` table.
* **D2 (Status Mismatch):** Identify successful payments mapped to uncompleted orders.
* **D3 (Value Check):** Find completed orders with invalid, zero, or missing amounts.
* **D4 (Inactive Users):** Identify customers who have never placed an order.
* **D5 (Clean View):** Create a consolidated clean order view containing only valid completed orders with valid customers and non-null positive amounts.

### Part E: Final Business Report
*Aggregation and analytical reporting.*
* Compile a comprehensive customer revenue report showing:
  * Customer ID, name, and city.
  * Total completed orders count.
  * Total revenue generated.
  * Average order value.
* Sort results by total revenue in descending order, including only valid data.

---

## 📝 Essential Interview Concepts Covered
The project includes conceptual answers to key database topics:
1. **Query Execution Order:** The sequential step-by-step logic the SQL engine uses (`FROM` ➡️ `WHERE` ➡️ `SELECT` ➡️ `ORDER BY`).
2. **LIKE Pattern Matching:** Case-insensitive wildcard queries (`LIKE 'a%z'`).
3. **Handling NULLs:** Why `=` cannot evaluate `NULL` and why `IS NULL` is required.
4. **Safe Updates/Deletes:** The dangers of running modifying scripts without a `WHERE` clause.

---

## 🏃 Getting Started

### Prerequisites
Make sure you have Python installed, along with `pandas` and `pypdf`/`PyPDF2` (if you wish to extract contents from the reference PDF):
```bash
pip install pandas
```

### Running the Notebook
1. Open the Jupyter Notebook:
   ```bash
   jupyter notebook Assignment_DML.ipynb
   ```
2. Run the initialization cells to spin up the SQLite in-memory database and populate the tables with starter records.
3. Walk through each task cell, write your SQL query inside the `q("SELECT ...")` wrapper, and execute the cell to view your results immediately.

---