# Lab: Decision-Making (if, if-else, else-if, nested if)

## Objectives
- Use `if`, `if-else` and the else-if ladder
- Use nested `if` when one decision depends on another
- Use `&&` and `||` in conditions
- Test with normal, boundary and invalid inputs

## Tasks
| File | Concept |
|------|---------|
| `task1_positive_negative_zero.cpp` | else-if ladder |
| `task2_exam_grade.cpp` | else-if ladder, validation |
| `task3_temperature_alert.cpp` | if-else with `||` |
| `task4_electricity_category.cpp` | else-if ladder, validation |
| `task5_scholarship_nested.cpp` | nested if, validation |
| `task6_login_verification.cpp` | nested if |
| `challenge_water_tank.cpp` | else-if ladder with `&&`, conversion |

| Task | Input | Expected | My output |
|------|-------|----------|-----------|
| 1 | 8 | Positive | Positive |
| 1 | -4 | Negative | Negative |
| 1 | 0 | Zero | Zero |
| 2 | 92 | Grade A | Grade A |
| 2 | 76 | Grade B | Grade B |
| 2 | 63 | Grade C | Grade C |
| 2 | 54 | Grade D | Grade D |
| 2 | 42 | Grade F | Grade F |
| 2 | 105 | Invalid marks | Invalid marks |
| 3 | -2 | Warning | Warning |
| 3 | 10 | Normal | Normal |
| 3 | 32.5 | Normal | Normal |
| 3 | 46 | Warning | Warning |
| 4 | -5 | Invalid units | Invalid units |
| 4 | 80 | Low | Low |
| 4 | 250 | Medium | Medium |
| 4 | 420 | High | High |
| 4 | 650 | Very High | Very High |
| 5 | 85 82 | Scholarship approved | Scholarship approved |
| 5 | 85 60 | Attendance too low | Attendance too low |
| 5 | 70 90 | Marks too low | Marks too low |
| 5 | 85 -10 | Invalid | Invalid |
| 6 | 1234 2468 | Login successful | Login successful |
| 6 | 1234 1111 | Incorrect PIN | Incorrect PIN |
| 6 | 5555 2468 | User ID not found | User ID not found |
| Challenge | -1 | Invalid number | Invalid number |
| Challenge | 0.4 | Low level | Low level |
| Challenge | 1.8 | Level safe | Level safe |
| Challenge | 1.9 | Overflow risk | Overflow risk |

## What I learned
Write 3 or 4 sentences in your own words. Ideas from the real mistakes: the lower limit of a range
needs its own check; the 180 cm boundary meant "above 180", so 180 itself is safe; Task 3 needs
`float` or `double`, because `int` loses the decimals.

## Run
```
g++ task1_positive_negative_zero.cpp -o task1
.\task1.exe
```