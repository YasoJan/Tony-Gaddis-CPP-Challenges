# Distance per Tank of Gas

## Problem
A car with a 20-gallon gas tank averages 23.5 miles per gallon when driven in
town and 28.9 miles per gallon when driven on the highway. Write a program that
calculates and displays the distance the car can travel on one tank of gas when
driven in town and when driven on the highway.

## Formula: 

Distance = Number of Gallons × Average Miles per Gallon

## Variables

| Variable | Type | Description |
|----------|------|-------------|
| `MAX_GAS` | `const double` | Total gallons in a full tank (20.0) |
| `CITY_MPG` | `const double` | Average city miles per gallon (23.5) |
| `HWY_MPG` | `const double` | Average highway miles per gallon (28.9) |
| `hwy_max_distance` | `double` | Max distance on highway per tank |
| `city_max_distance` | `double` | Max distance in city per tank |

## Expected Output

| Field | Value |
|-------|-------|
| Max distance for hwy | 578.0 miles |
| Max distance for city | 470.0 miles |

## Concepts Practiced
- Named constants with `const double` for fixed values
- Multiplication to scale MPG across a full tank of gas
- Selective `using` statements instead of `using namespace std`