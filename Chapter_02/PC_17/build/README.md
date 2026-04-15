# Stock Commission

## Problem
Kathryn bought 750 shares of stock at a price of $35.00 per share. She must
pay her stockbroker a 2 percent commission for the transaction. Write a program
that calculates and displays the following:

- The amount paid for the stock alone (without the commission)
- The amount of the commission
- The total amount paid (for the stock plus the commission)

## Formula:

Share Total  = Shares Bought × Price Per Share
Commission   = Commission Rate × Share Total
Total        = Share Total + Commission

## Variables

| Variable | Type | Description |
|----------|------|-------------|
| `SHARES_BOUGHT` | `const double` | Number of shares purchased (750.0) |
| `PRICE_PER_SHARE` | `const double` | Price of each share ($35.00) |
| `COMMISSION` | `const double` | Broker commission rate (0.02) |
| `share_total` | `double` | Total cost of shares before commission |
| `share_commission` | `double` | Commission amount owed to broker |
| `total` | `double` | Final amount paid including commission |

## Expected Output

| Field | Amount |
|-------|--------|
| Stock alone | $26,250.00 |
| Commission | $525.00 |
| Total amount | $26,775.00 |

## Concepts Practiced
- Named constants for all fixed values
- Multi-step arithmetic building on previous results
- Formatted output using `fixed` and `setprecision(2)` for currency
- Selective `using` statements instead of `using namespace std`