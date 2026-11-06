# Level 1: Input, Output, and Variables

## What is a variable?
A variable is a named box in memory that stores a value, like `int age = 19;`.

## "age" vs age
- `cout << "age";` prints the word age.
- `cout << age;` prints the value stored in the variable age.

## Arrows
- `cout <<` sends data out to the screen.
- `cin >>` reads data into a variable.
- I print a prompt with `cout` before `cin` so the user knows what to type.

## Mistake: WinMain error
The compiler said `undefined reference to WinMain`. It meant the compiler found no `main`. My file was empty because I had not saved it. I used `dir` to see Length 0, saved with Ctrl + S, and compiled again. It can also happen if `main` is misspelled.