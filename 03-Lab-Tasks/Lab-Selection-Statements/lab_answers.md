# Selection Statements Lab: Parts A and C

## Part A: Warm-up

### 1. if or switch?
| Problem | Structure | Reason |
|---------|-----------|--------|
| Temperature > 40 C | if | It is a range, and switch cannot test ranges |
| Menu choice is 1, 2, or 3 | switch | Exact fixed values, one case for each |
| Marks >= 50 AND attendance >= 75 | if | A combined condition using && |
| Select one of four fixed services | switch | One exact choice from a fixed list |

### 2. What happens if break is omitted after a case?
Execution continues into the next case and runs its statements too, until a break or the end of the
switch. This is called fall-through.

### 3. Is default compulsory? What is its purpose?
No, it is optional. It handles any value that does not match a case, such as an invalid menu choice.

## Part C: Trace the output

```cpp
int n = 2;
switch (n)
{
    case 1: cout << "Red "; break;
    case 2: cout << "Green ";
    case 3: cout << "Blue ";

    case 4: cout << "yellow"; break;
    default: cout << "Other";
}
```
Note: the sheet printed the fourth case as `case4:cout<<"yellow";break;` with curly quotes. I read it as `case 4:`.

**Output:** Green Blue yellow

**Explanation:** n is 2, so execution starts at case 2 and prints "Green ". Case 2 and case 3 have no break, so
it falls through and prints "Blue " and then "yellow". The break after "yellow" stops the switch, so default
never runs.

I ran this on my computer and the output matched.