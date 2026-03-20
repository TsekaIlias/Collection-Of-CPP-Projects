================================================================================
                 C++ RANDOM ARRAYS & MATRIX OPERATIONS
================================================================================

Description
-----------
This project contains two C++ programs that demonstrate how to work with 
randomly generated numbers, one-dimensional arrays, and two-dimensional 
matrices. Both scripts utilize the <cstdlib> library to generate random 
values based on a fixed seed (12345) to ensure reproducible results on each 
run.

Files Included
--------------
1. RandomAverage.cpp
   Generates an array of 100 random integers ranging from 1 to 100.
   - Calculates the overall average of the array's elements.
   - Uses pass-by-reference variables to count exactly how many numbers fall 
     within 10% of the calculated average.
   - Demonstrates casting an integer sum to a double for accurate floating-point 
     division.

2. TwoInOne.cpp
   Creates a 5x5 two-dimensional array populated with random numbers ranging 
   from 1 to 1000.
   - Computes the total sum of each individual column in the matrix.
   - Prints the formatted 5x5 matrix to the console using tabbed spacing.
   - Identifies and outputs the specific column index that has the highest 
     total sum.

Requirements
------------
- A standard C++ compiler (such as GCC/g++, Clang, or MSVC).
- No external libraries are required; the programs rely solely on standard 
  libraries <iostream> and <cstdlib>.

How to Compile and Run
----------------------
Open your terminal or command prompt and navigate to the project directory.

To compile and run the Random Average script:
    g++ RandomAverage.cpp -o RandomAverage
    ./RandomAverage

To compile and run the Matrix Column Sum script:
    g++ TwoInOne.cpp -o TwoInOne
    ./TwoInOne
