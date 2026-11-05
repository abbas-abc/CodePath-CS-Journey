# Level 0: Setup and First Program

Date: 5 November 2026

## What is a compiler?
A compiler turns the C++ code I write into a program (an `.exe` file) that the computer can run. I must compile first, then run.

## My first program
```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Hello World" << endl;
    return 0;
}
```

Output:
```
Hello World
```

## What each line does
- `#include <iostream>`: brings in the input-output tools (`cin` and `cout`). `iostream` means input-output stream. Without it, `cout` does not work.
- `using namespace std;`: `cout` and `endl` belong to a group called `std` (standard). This line lets me write `cout` instead of `std::cout`.
- `int main()`: the front door of the program. The computer always starts here. `int` means it gives back a whole number when it finishes.
- `cout << "Hello World" << endl;`: prints the text on the screen and moves to the next line.
- `return 0;`: tells the computer the program finished without problems.

## How I compile and run
1. Open the terminal in the folder with my file
2. Compile: `g++ hello_world.cpp -o hello_world`
3. Run: `.\hello_world.exe`

If nothing prints after the compile command, it worked.

## What I learned about endl
`endl` is like pressing Enter. It moves the output to the next line.

Without `endl`:
```cpp
cout << "Hello";
cout << "World";
```
prints `HelloWorld` on one line.

With `endl` after the first line, it prints:
```
Hello
World
```

Whatever is inside the quotes prints exactly as I typed it, including spelling mistakes.

## Mistakes I made today
- `.gitignore` and `README.md` did not exist at first, so I created them in VS Code.
- Git said "not a git repository" until I ran `git init`.
- I did not know what `return 0;` and `int main()` meant. I learned them today.

## Git commands I used
- `git init`: start Git in the folder
- `git add .`: select all changes
- `git commit -m "message"`: save a snapshot on my computer
- `git push`: send it to GitHub
- `git status`: check what changed (run this first)

## Questions I still have
- What does `<<` mean after `cout`?