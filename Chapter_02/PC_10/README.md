# Miles per Gallon

## Problem
Write a program that calculates a car's miles per gallon. The car can travel
375 miles on 15 gallons of gas. Display the miles per gallon with two decimal
places of precision.

## Variables

| Variable | Type | Description |
|----------|------|-------------|
| `MAX_MILES` | `const double` | Total miles traveled (375.0) |
| `MAX_GAS` | `const double` | Total gallons of gas used (15.0) |
| `mpg` | `double` | Calculated miles per gallon |

## Expected Output

| Field | Value |
|-------|-------|
| Miles per Gallon (MPG) | 25.00 |

## Concepts Practiced
- Named constants with `const double` for fixed values
- Basic arithmetic with floating point division
- Formatted output using `fixed` and `setprecision(2)` from `iomanip`
- Selective `using` statements instead of `using namespace std`