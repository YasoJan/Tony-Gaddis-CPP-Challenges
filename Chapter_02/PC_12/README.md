# Land Calculation

## Problem
One acre of land is equivalent to 43,560 square feet. Write a program that
calculates the number of acres in a tract of land with 391,876 square feet.

## Formula:

Acres = Square Feet / Square Feet per Acre

## Variables

| Variable | Type | Description |
|----------|------|-------------|
| `ACRE_SQFT` | `const double` | Square feet in one acre (43,560.0) |
| `custom_tract_sqft` | `double` | Total square feet of the tract (391,876.0) |
| `custom_tract_acres` | `double` | Calculated acres of the tract |

## Expected Output

| Field | Value |
|-------|-------|
| Acres in tract | 9.00 acres |

## Concepts Practiced
- Named constants with `const double` for fixed conversion values
- Division to convert square feet into acres
- Formatted output using `fixed` and `setprecision(2)` from `iomanip`
- Selective `using` statements instead of `using namespace std`