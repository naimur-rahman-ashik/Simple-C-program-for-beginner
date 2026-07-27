# Simple C Programs for Beginners

A collection of small C projects written while learning the fundamentals of C programming — covering console I/O, control flow, functions, and basic system interaction.

Each folder is a self-contained program with its own source file. Compile and run any of them individually using GCC.

---

## Projects

### 🧮 Calculator
**Folder:** `Simple_Calculater/`

A command-line calculator that performs basic arithmetic operations (addition, subtraction, multiplication, division) based on user input.

```bash
cd "Simple_Calculater"
gcc calculator.c -o calculator
./calculator        # or calculator.exe on Windows
```

---

### 🕒 Real-Time Clock
**Folder:** `Simple realtime_clock/`

Displays the current system time and date in the console, refreshing automatically every second — a simple clock built using the `time.h` library. Clears and redraws the screen each cycle, with support for both Windows and Linux.

```bash
cd "Simple realtime_clock"
gcc clock.c -o clock
./clock              # or clock.exe on Windows
```

Press `Ctrl+C` to stop the clock.

---

### 🎲 Guessing Game
**Folder:** `Simple guessing_game/`

A number-guessing game where the program picks a random number and the player tries to guess it, receiving "too high" / "too low" hints until they guess correctly.

```bash
cd "Simple guessing_game"
gcc guessing.c -o guessing
./guessing            # or guessing.exe on Windows
```

---

## Getting Started

### Prerequisites
- A C compiler ([GCC](https://gcc.gnu.org/), MinGW on Windows, or the one bundled with WSL/Linux/macOS)
- Git (to clone the repository)

### Clone the repository
```bash
git clone https://github.com/naimur-rahman-ashik/Simple-C-program-for-beginner.git
cd Simple-C-program-for-beginner
```

Then `cd` into any project folder above and compile it with `gcc`.

---

## Repository Structure
```
Simple-C-program-for-beginner/
├── Simple_Calculater/       # Command-line calculator
├── Simple realtime_clock/   # Live clock display
├── Simple guessing_game/    # Number guessing game
└── .gitignore                # Excludes compiled binaries (*.exe, *.o, *.out)
```

---

## What I'm Learning

This repo is part of an ongoing journey learning C fundamentals, including:
- Variables, data types, and operators
- Conditionals and loops
- Functions and modular code
- Basic string and console I/O
- Working with `time.h` for system time
- Using Git and GitHub for version control

More projects will be added here as I keep practicing.

---

## Author

**Naimur Rahman Ashik**
[github.com/naimur-rahman-ashik](https://github.com/naimur-rahman-ashik)
