# Bit Manipulation

Bit manipulation in C involves the use of bitwise operators to perform operations directly on the binary representations of data. This technique is fundamental in low-level programming, allowing for efficient data processing and control over hardware.

## Bitwise Operators

C provides several bitwise operators that allow you to manipulate individual bits within integral data types. The primary operators include:

- **&** Compares each bit of two numbers; the results is 1 if both bits are 1.
- **|** Compares each bit; the result is 1 if at least one of the bits is 1.
- **^** Compares each bit; the result is 1 if the bits are different.
- **~** Inverts all bits; 0 become 1 and vice versa.
- **<<** Shifts bits to the left, effectively multiplying the number by 2^n (where *n* is the number of shifted positions).
- **>>** Shifts bits to the right, effectively dividing the number by 2^n (with sign preservation for signed integers).

## Application of Bit Manipulation

Bit manipulation is widely used for various purposes, including:

- **Performance Optimization**: Operations on bits are generally faster than arithmetic operations. For example, multiplying or dividing by powers of two can be efficiently achieved using left or right shifts, respectively 34.
- **Flags and Masks**: Bit manipulation allows for setting, clearing, or toggling specific bits in a variable. This is particularly useful in scenarios where multiple boolean flags need to be stored in a single integer 24.
- **Data Compression and Encryption**: Manipulating bits directly can help in implementing algorithms that require precise control over data representation

---

## -- General Requirements --

All files compilated on Ubuntu 24.04 LTS

All files ends with a new line

A README.md file, at the root of the folder of the project is mandatory

Code use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

Not allowed to use global variables

No more than 5 functions per file

The only C standard library functions allowed are malloc, free, printf and exit

The prototypes of all your functions are included in the header file called lists.h