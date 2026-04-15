# Circuit Board Price

## Problem
An electronics company sells circuit boards at a 35 percent profit. Write a
program that will calculate the selling price of a circuit board that costs
$14.95. Display the result on the screen.

## Formula:

Selling Price = Cost + (Profit Percentage × Cost)

## Variables

| Variable | Type | Description |
|----------|------|-------------|
| `PERCENT_PROFIT` | `const double` | Profit percentage as a decimal (0.35) |
| `cb_cost` | `double` | Base cost of the circuit board ($14.95) |
| `cb_price` | `double` | Calculated selling price with profit |

## Expected Output

| Field | Value |
|-------|-------|
| Selling price | $20.18 |

## Concepts Practiced
- Named constants with `const double` for fixed percentage values
- Profit margin formula using multiplication and addition
- Formatted output using `fixed` and `setprecision(2)` for currency
- Selective `using` statements instead of `using namespace std`