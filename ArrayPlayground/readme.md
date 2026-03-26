C++ POINTERS & REFERENCES EXAMPLES
=

Description
-----------
This project is a collection of beginner-friendly C++ programs demonstrating 
fundamental memory management concepts. The scripts illustrate how to use 
pointers for array manipulation, how to pass memory addresses to functions, 
and the crucial differences between passing variables by value versus passing 
them by reference.

Files Included
--------------
1. ArrayReversal.cpp
   Reverses an array in-place using a two-pointer approach.
   - Sets a `start` pointer at the beginning of the array and an `end` pointer 
     at the last element.
   - Swaps the values at these pointers and moves them toward the center until 
     the entire array is reversed.

2. ArraySum.cpp
   Calculates the total sum of all elements within an integer array.
   - Demonstrates how to iterate through an array passed to a function.
   - Shows a common trick to calculate the size of a statically allocated array 
     using `sizeof(arr) / sizeof(arr[0])`.

3. MultiplySimple.cpp
   A straightforward demonstration of pointer dereferencing.
   - The `multiply` function accepts two integer pointers (`int* a`, `int* b`).
   - It dereferences the pointers to access the actual integer values, 
     multiplies them, and returns the result.

4. swapByReferenceAndValue.cpp
   Contrasts two different methods of passing arguments to a function:
   - `byvalue(int a, int b)`: Creates copies of the variables. The swap only 
     happens locally inside the function, leaving the original variables in 
     `main` unchanged.
   - `byreference(int &a, int &b)`: Passes the actual memory references. The 
     swap successfully alters the original variables in `main`.

Requirements
------------
- A C++ compiler such as GCC (g++), Clang, or MSVC.
- No external libraries required; uses standard `<iostream>`.

How to Compile and Run
----------------------
Open your terminal or command prompt and navigate to the folder containing 
these files. You can compile and run each file individually.

Example using g++:

1. To run ArrayReversal:
    g++ ArrayReversal.cpp -o ArrayReversal
    ./ArrayReversal    # On Windows, use: ArrayReversal.exe

2. To run ArraySum:
    g++ ArraySum.cpp -o ArraySum
    ./ArraySum         # On Windows, use: ArraySum.exe

3. To run MultiplySimple:
    g++ MultiplySimple.cpp -o MultiplySimple
    ./MultiplySimple   # On Windows, use: MultiplySimple.exe

4. To run the Swap example:
    g++ swapByReferenceAndValue.cpp -o swap
    ./swap             # On Windows, use: swap.exe
