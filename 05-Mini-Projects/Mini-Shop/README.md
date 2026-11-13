# Mini Shop and Inventory Manager (Electronics Store)

Group 2, Project 2. A console program written in C++ for Programming Fundamentals.

## What it does
The customer picks an item from a menu and enters a quantity. The program checks the stock,
calculates the bill, applies a discount, and shows the remaining stock.

## Concepts used
| Concept | Where |
|---------|-------|
| Variables and data types (`int`, `double`, `string`, `bool`) | Item, price, stock, bill |
| Input and output (`cin`, `cout`) | Menu, quantity, bill |
| `switch`, `case`, `break`, `default` | Item menu, which sets the name, price and stock |
| `if` / `else if` / `else` | Quantity checks, stock check |
| Else-if ladder | Discount tiers (the highest limit is checked first) |

## Items (stock is stored in the program)
| Choice | Item | Price (Rs) | Stock |
|--------|------|-----------|-------|
| 1 | Earphones | 1500 | 20 |
| 2 | USB Cable | 500 | 50 |
| 3 | Mouse | 1200 | 15 |
| 4 | Power Bank | 5000 | 10 |

## Discount rule (custom rule for an electronics shop)
| Total bill | Discount |
|------------|----------|
| 10000 or more | 15% |
| 5000 or more, below 10000 | 10% |
| Below 5000 | 0% |

## Test results
| Choice, Quantity | Result |
|------------------|--------|
| 1, 2 | Total 3000, Discount (0%) 0, Final 3000, Remaining stock 18 |
| 2, 10 | Total 5000, Discount (10%) 500, Final 4500, Remaining stock 40 (boundary) |
| 3, 5 | Total 6000, Discount (10%) 600, Final 5400, Remaining stock 10 |
| 4, 2 | Total 10000, Discount (15%) 1500, Final 8500, Remaining stock 8 (boundary) |
| 4, 3 | Total 15000, Discount (15%) 2250, Final 12750, Remaining stock 7 |
| 4, 11 | Not enough stock |
| 1, 0 | Invalid quantity |
| 9, any | Invalid choice |

## Version history
- **v1:** the user typed the price, quantity and stock, with one 10% discount rule.
- **v2 (this version):** feedback said that stock should be stored in the program, and that `switch` belongs to this
  stage. Items now come from a `switch` menu with stored stock and prices, and the discount is a two-tier ladder.
  A bug where the higher discount was never reached (wrong order of conditions) was found and fixed.

## Limits (what comes next)
- Stock resets every run, because variables are lost when the program ends. Saving it needs file handling.
- One purchase per run. **Loops** will allow repeated purchases.
- **Functions** will separate the discount and stock logic.
- **Arrays and structures** will store the products, with search by name or ID and sorting by price.

## How to run
```
g++ mini_shop.cpp -o mini_shop
.\mini_shop.exe
```