# This program was rewritten in the C programming language.

Write a program where a user inputs a string and the application prints the
character that occurs most often.
hello > l 2
# Program Tasks
1. Ask user for string
2. Iterate over each character
   - Add a counter for each character
3. Find character with highest counter
4. Print character

# Check if you have a C++ compiler installed
**Run this command in terminal to check if C++ compiler is installed**
```
 g++ --version
```

# Installing C++ compiler (MSYS2)
**1. Download MSYS2 App and Run Installer (https://www.msys2.org/)**

**2. Run this command in the MSYS2 terminal:**
```
 $ pacman -S mingw-w64-ucrt-x86_64-gcc
```
**3. Run this command in the MSYS2 terminal:**
```
 $ pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain"
```
**4. Change your User PATH environment variables and add the following PATHs:**
```
 C:\msys64\ucrt64\bin 
 C:\msys64\mingw64\bin
```
**5. Run this command in terminal to check if successful install:**
```
 g++ --version
```

# How to Run Program
**1. Open Terminal**

**2. Change Directory to MostOccuringChar folder**
```
cd Users\Break\Programming Languages CSCI 485\MostOccuringChar
```
**3. Compile the file with the command**
```
 g++ main.cpp
```
**4. Execute the files with the commands:**
```
 Windows -> "a.exe [expression to enter]" 
 Linux -> "./a.out [expression to enter]"
```

# Running Test Cases (CMake/GoogleTest)
**1. Install Google Test**
```
g++ -o testing testing.cpp main.cpp -lgtest -lgtest_main -pthread ./testing
```
