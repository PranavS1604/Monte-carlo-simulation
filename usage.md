# Monte Carlo Pi Estimation

This repository demonstrates the Monte Carlo method for estimating the value of Pi using C++. The following steps explain how to compile, run, debug, and perform memory analysis on both Windows and Linux.

## Requirements

### Windows
- **g++** (via MinGW or Visual Studio C++ tools)
- **PowerShell** (pre-installed on Windows)
- **Optional:** Visual Studio for debugging

### Linux
- **g++** (can be installed via package manager)
- **Valgrind** (for memory analysis)
- **GDB** (for debugging)

---

## Steps for Windows

1. Navigate to the Project Directory
2. Open **PowerShell** and navigate to the folder containing the repository:

```powershell
cd path\to\montecarlo
```
3. Use **g++** to compile the program.

```powershell
g++ -o MonteCarloPi main_program.cpp implementation.cpp
```
4. After compilation, execute the generated program:

```powershell
.\MonteCarloPi.exe
```

## Steps for Linux

1. Navigate to the Project Directory
2. Open **terminal** and navigate to the folder containing the repository:

```bash
cd path\to\montecarlo
```
3. Use **g++** to compile the program.

```bash
g++ -o MonteCarloPi main_program.cpp implementation.cpp
```
4. Alternatively we can use **Makefile**:

```bash
make
```
5.Run the program

```bash
./MonteCarloPi
```
---
## Debugging and Memory analysis (In linux)

A] For debugging using **GDB**

```bash
gdb ./MonteCarloPi
```

B] For memory analysis using **Valgrind**

```bash
valgrind --leak-check=full ./MonteCarloPi
```

   
