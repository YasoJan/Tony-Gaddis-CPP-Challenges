# Cyborg Data Type Sizes

## Problem
You have been given a job as a programmer on a Cyborg supercomputer. In order
to accomplish some calculations, you need to know how many bytes the following
data types use: char, int, float, and double. You do not have any manuals, so
you can't look this information up. Write a C++ program that will determine the
amount of memory used by these types and display the information on the screen.

## Data Types Measured

| Data Type | Size |
|-----------|------|
| `char` | 1 byte |
| `int` | 4 bytes |
| `float` | 4 bytes |
| `double` | 8 bytes |

> Note: Output may vary depending on system and compiler.

## Variables

| Variable | Type | Description |
|----------|------|-------------|
| `CHAR_BYTES` | `const int` | Stores size of char in bytes |
| `INT_BYTES` | `const int` | Stores size of int in bytes |
| `FLOAT_BYTES` | `const int` | Stores size of float in bytes |
| `DOUBLE_BYTES` | `const int` | Stores size of double in bytes |

## Concepts Practiced
- `sizeof()` operator to query data type sizes at runtime
- Named constants with `const`
- Basic console output with `cout`
- Selective `using` statements instead of `using namespace std`