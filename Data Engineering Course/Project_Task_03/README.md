# COVID-19 Data Analytics ETL Pipeline using AWS

## Project Overview

This project demonstrates an end-to-end ETL (Extract, Transform, Load) pipeline built using AWS services. The pipeline ingests COVID-19 country-wise data from a CSV file stored in Amazon S3, processes and transforms the data using AWS Lambda, and loads the transformed records into Amazon DynamoDB for fast querying and analytics.

---

## Architecture

CSV Dataset (S3)
↓
AWS Lambda (ETL Processing)
↓
Amazon DynamoDB
↓
Analytics & Reporting

---

## AWS Services Used

* Amazon S3
* AWS Lambda
* Amazon DynamoDB
* AWS IAM

---

## Dataset

Source: COVID-19 Country Wise Dataset

Columns Used:

* Country/Region
* Confirmed Cases
* Deaths
* Recovered
* Active Cases
* WHO Region

---

## ETL Workflow

### Extract

* COVID dataset uploaded to Amazon S3 bucket.
* Lambda function reads the CSV file from S3.

### Transform

The Lambda function:

* Parses CSV records.
* Converts numeric fields into integers.
* Calculates risk status based on confirmed cases.

Risk Classification:

| Confirmed Cases | Risk Status |
| --------------- | ----------- |
| > 1,000,000     | High Risk   |
| > 100,000       | Medium Risk |
| <= 100,000      | Low Risk    |

### Load

* Transformed records are inserted into DynamoDB.
* Country name is used as the partition key.

---

## S3 Configuration

Bucket Name:

covid-19-analysis-etl

Folder:

covid-data/

Dataset File:

country_wise_latest.csv

---

## DynamoDB Configuration

Table Name:

covid-country-data

Partition Key:

country (String)

Stored Attributes:

* country
* confirmed
* deaths
* recovered
* active
* risk_status

---

## Lambda Function

Function Name:

covid-etl-processor

Responsibilities:

1. Read CSV file from S3
2. Transform records
3. Calculate risk level
4. Insert data into DynamoDB

---

## IAM Permissions

### S3 Access

* s3:GetObject

### DynamoDB Access

* dynamodb:PutItem
* dynamodb:BatchWriteItem

### Lambda Execution

* AWSLambdaBasicExecutionRole

---

## Results

* Successfully processed 187 country records.
* Data loaded into DynamoDB.
* Risk categories generated automatically.
* ETL execution completed successfully through AWS Lambda.

---

## Why S3?

* Durable and scalable storage
* Low-cost raw data storage
* Ideal landing zone for ETL pipelines

## Why Lambda?

* Serverless architecture
* No infrastructure management
* Cost-effective for small workloads
* Event-driven processing

## Why DynamoDB?

* Fast key-value lookups
* Fully managed NoSQL database
* Scales automatically
* Suitable for analytical dashboards

---

## Future Enhancements

* Automate pipeline using S3 Event Triggers
* Add CloudWatch monitoring
* Store processed data in S3
* Build Power BI Dashboard
* Integrate Athena for querying

---

## Author

Ankit Vishwakarma

Data Analyst | AWS | SQL | Python | Power BI
