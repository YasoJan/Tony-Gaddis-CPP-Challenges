# Energy Drink Consumption

## Problem
A soft drink company recently surveyed 16,500 of its customers and found that
approximately 15 percent of those surveyed purchase one or more energy drinks
per week. Of those customers who purchase energy drinks, approximately 58
percent of them prefer citrus-flavored energy drinks. Write a program that
displays the following:

- The approximate number of customers who purchase one or more energy drinks
  per week
- The approximate number of customers who prefer citrus-flavored energy drinks

## Formula:

Weekly Buyers  = Total Customers × Weekly Purchase Rate
Citrus Buyers  = Weekly Buyers × Citrus Preference Rate

## Variables

| Variable | Type | Description |
|----------|------|-------------|
| `TOTAL_CUSTOMERS` | `const int` | Total number of surveyed customers (16,500) |
| `PERCENT_RETURN` | `const double` | Rate of weekly energy drink buyers (0.15) |
| `CITRUS_PREFERENCE` | `const double` | Rate of citrus preference among buyers (0.58) |
| `weekly_buyers` | `int` | Customers who buy energy drinks weekly |
| `citrus_buyers` | `int` | Customers who prefer citrus-flavored drinks |

## Expected Output

| Field | Value |
|-------|-------|
| Weekly energy drink buyers | 2,475 |
| Citrus-flavored preference | 1,435 |

## Concepts Practiced
- Named constants for survey data and percentage rates
- Integer variables for counting whole people
- Multi-step percentage calculations building on prior results
- Knowing when to exclude `iomanip` when decimal formatting isn't needed
- Selective `using` statements instead of `using namespace std`