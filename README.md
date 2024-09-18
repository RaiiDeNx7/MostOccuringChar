# This program was rewritten in the C programming language.

Write a program where a user inputs a string and the application prints the
character that occurs most often.
hello > l 2
# Procedure
- [X] 1. ask user for string
2. iterate over each character
   add a counter for each character
3. find character with highest counter
4. print character

# Check if you have a C++ compiler installed
1. run "g++ --version" in terminal (Command Prompt)

# Installing C++ compiler (MSYS2)
1. Download MSYS2 App and Run Installer (https://www.msys2.org/)
2. Run this command in the MSYS2 terminal :
- "$ pacman -S mingw-w64-ucrt-x86_64-gcc"
3. Run this command in the MSYS2 terminal:
- "$ pacman -S --needed base-devel mingw-w64-ucrt-x86_64-toolchain"
4. Change your User PATH environment variables and add the following PATHs:
- "C:\msys64\ucrt64\bin" and C:\msys64\mingw64\bin
5. Run this command in terminal to check if successful install:
- "g++ --version"

# How to Run
1. Open Terminal
2. Change Directory to MostOccuringChar folder.
- Example: "cd Users\Break\Programming Languages CSCI 485\MostOccuringChar"
3. Compile the file with the command
- "g++ main.cpp"
4. Execute the files with the commands:
-  Windows - "a.exe" 
-  Linux - "./a.out"

# Test Cases