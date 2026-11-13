# Level 2: Conditionals (if, else-if, nested if, logical operators, switch)

## What is a conditional?
A conditional lets the program choose which code runs, depending on whether a condition is true or false.

## if and if-else
```cpp
if (marks >= 50) { cout << "Pass"; }
else             { cout << "Fail"; }
```
`if` runs a block only when the condition is true. `else` is the other path and has no condition.

## else-if ladder
Checks conditions from top to bottom and runs only the first true one.
**Order matters:** put the strictest condition first. In my shop, `total >= 10000` must come before
`total >= 5000`, or a 15000 bill would stop at the 5000 rule.

## Logical operators
| Operator | Meaning | Example |
|----------|---------|---------|
| `&&` | AND: both true | `marks >= 50 && attendance >= 75` |
| `||` | OR: at least one true | `temp < 10 || temp > 45` |
| `!` | NOT: reverses | `!validItem` |

A comma is not AND: `(a >= 50, b >= 75)` only uses the last part.

## Nested if
An `if` inside another `if`. The inner check runs only if the outer one passed (login: ID first, then PIN).

## Validation and boundaries
- Validate **first**, then calculate (check for division by zero or bad input before using it).
- Every value with a range has a top limit **and** a bottom limit: four conditions for two values.
- Test the exact edges: 49, 50, 51 for a pass mark of 50.

## switch
```cpp
switch (choice) {
    case 1: /* ... */ break;
    default: /* invalid */
}
```
- Use it for exact values (`int`, `char`). Use `if` for ranges and combined conditions.
- `break` leaves the switch. Without it, execution falls through into the next case.
- Two labels can share one action (`case 'R': case 'r':`).
- `default` is optional, and handles values that match no case.
- `case` labels end with a colon and must be constants. A misspelled `default:` becomes a plain label,
  so the invalid case silently stops working.

## Mistakes I made and fixed
| Mistake | Fix |
|---------|-----|
| `=<` instead of `<=` | The `<` comes first |
| `(a >= 50, b >= 75)` instead of `&&` | Use `&&` |
| `a == b != c` to compare three values | Compare two at a time, joined with `||` or `&&` |
| `>= 5000` checked before `>= 10000` | Highest limit first |
| Only the top limit validated | Check both limits |
| `int` for decimal input | Use `double` or `float` |
| `num1 + num1` (wrong variable) | Test every case with known answers |
| Dividing before validating | Validate first |
| Missing `;` after `cout`, `defaul:` typo | Check semicolons and colons before compiling |
| Asked the user for stock | Stock belongs to the shop, so store it in the program |
| Changed the wording of the required message | Copy the lab wording exactly |

## Weak areas to keep practising
- Chained comparisons
- Boundary values
- Matching the task wording exactly

## Questions I still have
- What is the purpose of default in a switch statement?

## Programs
- `02-Coding-Practice/Level-2-Conditionals/` (p01 to p11)
- `03-Lab-Tasks/Lab-Decision-Making/`
- `03-Lab-Tasks/Lab-Selection-Statements/`