# 8. Total Purchase

## Problem
A customer in a store is purchasing five items. Write a program that holds 
the prices of the five items in five variables. Display each item's price, 
the subtotal of the sale, the amount of sales tax, and the total.

## Item Prices

| Item | Price |
|------|-------|
| Item 1 | $15.95 |
| Item 2 | $24.95 |
| Item 3 | $6.95 |
| Item 4 | $12.95 |
| Item 5 | $3.95 |

## Variables

| Variable | Type | Description |
|----------|------|-------------|
| `SALES_TAX` | `const double` | Sales tax rate (7%) |
| `item_1_price` through `item_5_price` | `double` | Price of each item |
| `subtotal` | `double` | Sum of all item prices before tax |
| `total_sales_tax` | `double` | Tax applied to subtotal |
| `total` | `double` | Final amount due |

## Expected Output

| Field | Amount |
|-------|--------|
| Subtotal | $64.75 |
| Sales Tax (7%) | $4.53 |
| Total | $69.28 |

## Concepts Practiced
- Named constants for fixed rates
- Floating point arithmetic with currency
- Formatted output with `iomanip`
- Separating subtotal, tax, and total calculations

