# Input Output System Calls

System calls are the calls that a program makes to the system kernel to provide the services to which the program does not have direct access. For example, providing access to input and output devices such as monitors and keyboards. We can use various functions provided in the C Programming language for input/output system calls such as *create*, *open*, *read*, *write*, etc.

## Input/Output System Calls used

- *open*
- *close*
- *read*
- *write*

## -- General Requirements --

All files compilated on Ubuntu 24.04 LTS using *gcc*, using options **-Wall -Werror -Wextra -pedantic -std=gnu89**

All files ends with a new line

A README.md file, at the root of the folder of the project is mandatory

Code use the Betty style. It will be checked using betty-style.pl and betty-doc.pl

Not allowed to use global variables

No more than 5 functions per file

The only C standard library functions allowed are malloc, free and exit. Any use of functions like printf, puts, calloc, realloc etc… is forbidden
Allowed syscalls: *read, write, open, close*

The prototypes of all your functions are included in the header file called main.h
