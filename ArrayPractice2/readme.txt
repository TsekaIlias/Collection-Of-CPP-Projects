================================================================================
                 C++ SORTING ALGORITHMS & TEMPLATES
================================================================================

Description
-----------
This project contains C++ programs demonstrating different array sorting 
techniques. It covers a generic implementation of Selection Sort using 
C++ templates and a specific implementation of Radix Sort for integers 
.

Files Included
--------------
1. pinakes.cpp
   Implements a generic Selection Sort algorithm using C++ templates 
   (template <typename T>).
   - Demonstrates sorting on three different data types: float, int, and 
     string arrays, each of a constant size of 5.
   - Includes a generic printArray function to output the sorted results 
     to the console.

2. radixpinakes.cpp
   Implements the Radix Sort algorithm specifically for integer arrays 
  .
   - Uses a digit-by-digit sorting approach (counting sort internally) 
     starting from the least significant digit (exp = 1, 10, 100...) 
    .
   - Dynamically handles the array by first finding the maximum element 
     to determine how many digits need to be processed.
   - Includes a helper printArray function and tests the algorithm on a 
     pre-defined array of 8 integers.

Requirements
------------
- A standard C++ compiler (such as GCC/g++, Clang, or MSVC).
- No external libraries are required; the programs rely solely on standard 
  libraries <iostream> and <string>.

How to Compile and Run
----------------------
Open your terminal or command prompt and navigate to the project directory.

To compile and run the Selection Sort (Templates) script:
    g++ pinakes.cpp -o pinakes
    ./pinakes      # On Windows, use: pinakes.exe

To compile and run the Radix Sort script:
    g++ radixpinakes.cpp -o radixpinakes
    ./radixpinakes # On Windows, use: radixpinakes.exe
