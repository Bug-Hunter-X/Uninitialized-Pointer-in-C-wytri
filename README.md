# Uninitialized Pointer Bug in C
This repository demonstrates a common error in C programming: using an uninitialized pointer.  The example shows how failing to properly initialize a pointer before dereferencing it can lead to unpredictable behavior and potential crashes. The solution demonstrates the correct way to initialize pointers to prevent this issue.

## Bug Description
The provided code attempts to use a pointer without first assigning it a valid memory address. This results in undefined behavior.

## Solution
The solution initializes the pointer *ptr* before using it, ensuring it points to a valid memory location. This prevents undefined behavior and ensures the code works correctly.
