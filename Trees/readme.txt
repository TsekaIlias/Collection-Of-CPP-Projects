================================================================================
                       C++ BINARY TREES & TRAVERSALS
================================================================================

Description
-----------
This project contains two C++ programs that demonstrate how to construct and 
traverse binary trees. It covers creating a standard binary tree for 
reverse level order traversal and building a height-balanced Binary Search 
Tree (BST) from a sorted array.

Files Included
--------------
1. BinaryTree.cpp
   Defines a basic TreeNode structure holding character data.
   - Hardcodes a specific binary tree structure with nodes 'A' through 'H' 
     using a helper buildTree() function.
   - Implements a reverseLevelOrder traversal.
   - Uses the C++ Standard Template Library (STL) <queue> and <stack> to 
     process the nodes level by level from right to left, and then prints 
     them in reverse order.

2. AssignTree.cpp
   Defines a TreeNode structure holding integer data.
   - Converts a statically defined sorted integer array (1 through 7) into a 
     Binary Search Tree (BST).
   - Uses a recursive divide-and-conquer approach (sortedArrayToBST) by 
     finding the middle element to serve as the root, ensuring the resulting 
     tree is height-balanced.
   - Implements a standard recursive preorder traversal to output the 
     constructed tree to the console.

Requirements
------------
- A standard C++ compiler (such as GCC/g++, Clang, or MSVC).
- The programs rely on the standard libraries <iostream>, <queue>, and 
  <stack>.

How to Compile and Run
----------------------
Open your terminal or command prompt and navigate to the project directory.

To compile and run the Binary Tree (Reverse Level Order) script:
    g++ BinaryTree.cpp -o BinaryTree
    ./BinaryTree      # On Windows, use: BinaryTree.exe

To compile and run the Array to BST script:
    g++ AssignTree.cpp -o AssignTree
    ./AssignTree      # On Windows, use: AssignTree.exe
