# Selection Statements Lab: Parts A and C

## Part A: Warm-up

### 1. if or switch?
Rule from the lab sheet: use `switch` for **exact values**, and `if` for **ranges and combined conditions**.

| Problem | Structure | Reason |
|---------|-----------|--------|
| Temperature > 40 C | (hint: is it one exact value or a range?) | |
| Menu choice is 1, 2, or 3 | (hint: exact values?) | |
| Marks >= 50 AND attendance >= 75 | (hint: one condition, or two combined?) | |
| Select one of four fixed services | (hint: exact values?) | |

### 2. What happens if `break` is omitted after a case?
(Hint: where does execution continue, and what is that behavior called?)

### 3. Is `default` compulsory? What is its purpose?
(Hint: your p10 and p11 both used it for invalid input. Is the program still valid without it?)

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
Note: the sheet printed the fourth case as `case4:cout<<"yellow";break;` with curly quotes. I read it as
`case 4: cout << "yellow"; break;`.

**Output:** (hint: which case does it start at? Which lines have a `break`? Where does it stop?)

**Explanation:** (one or two sentences using the word "fall-through")