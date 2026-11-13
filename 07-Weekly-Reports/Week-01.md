# Week 1 Report (5 to 13 November 2026)

## Topics covered
- Level 0: compiler, first program, Git and GitHub basics
- Level 1: variables, data types, `cin` and `cout`, arithmetic (`/` and `%`), integer division, comparison operators
- Level 2: `if`, `if-else`, else-if ladder, logical operators, nested if, validation, `switch`, `break`, `default`

## What I understood
- A program compiles and runs in two separate steps, and a program that compiles can still be wrong.
- `int / int` drops the decimal part, and dividing by zero must be checked first.
- The order of conditions in an else-if ladder decides which branch runs.
- Every value with a range needs a top limit and a bottom limit.
- `switch` fits exact values, and `break` stops fall-through.

## Programs written (27 files, all pushed)
| Area | Count |
|------|-------|
| Level 0 and Level 1 programs | 6 |
| Level 2 practice (p01 to p11) | 11 |
| Lab: Decision-Making (6 tasks and a challenge) | 7 |
| Lab: Selection Statements (3 tasks) | 3 |

## Mistakes and corrections
- `WinMain` error: the file was empty or unsaved.
- `=<` instead of `<=`.
- Comma used as AND.
- `a == b != c` instead of separate comparisons.
- Wrong order in a discount ladder, so the higher discount never ran.
- Only the top limit validated.
- Missing semicolons, and `defaul:` misspelled.
- Project: stock was asked from the user, and `switch` was not used.

## Weak areas
- Chained comparisons
- Boundary values
- Matching the exact wording of the task

## Project
Mini Shop and Inventory Manager (electronics). Version 1 asked the user for the stock. Version 2 stores the stock
and prices in the program using a `switch` menu, with a two-tier discount.

## Homework for next week
- Finish the selection lab Parts A and C
- Level 3: `while`, `for`, `do-while`, nested loops, patterns
- Add repeated purchases to the Mini Shop after loops

## Recommended next lesson
Level 3, Problem 1: print 1 to N with a `while` loop.

## GitHub files updated
`02-Coding-Practice/`, `03-Lab-Tasks/`, `01-Study-Notes/`, `05-Mini-Projects/Mini-Shop/`, `07-Weekly-Reports/Week-01.md`