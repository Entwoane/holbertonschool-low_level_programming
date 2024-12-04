# Doubly Linked Lists

A doubly linked list is a more complex data structure than a singly linked list, but it offers several advantages. The main advantage of a doubly linked list is that it allows for efficient traversal of the list in both directions. This is because each node in the list contains a pointer to the previous node and a pointer to the next node. This allows for quick and easy insertion and deletion of nodes from the list, as well as efficient traversal of the list in both directions.

![doubly-linked-list](https://media.geeksforgeeks.org/wp-content/uploads/20240809123741/Insertion-at-the-End-in-Doubly-Linked-List-copy.webp)

## Representation of Doubly Linked List in Data Structure

In a data structure, a doubly linked list is represented using nodes that have three fields:

- Data
- A pointer to the next node (next)
- A pointer to the previous node (prev)

![data-structure](https://media.geeksforgeeks.org/wp-content/uploads/20240809124907/Node-Structure-of-Doubly-Linked-List.webp)

## SYNTAX

```c
struct node {
    int data;
    struct node *next;
    struct node *prev;
};

```

This structure contains three essential elements:

- int data: to store the node's data
- struct node *next: a pointer to the next node
- struct node *prev: a pointer to the previous node

---
To create and manipulate a doubly linked list, you would typically define functions to:

- Initialize the list
- Insert nodes (at the beginning, end, or a specific position)
- Delete nodes
- Traverse the list (forward and backward)
- Search for elements
- Free the memory used by the list

Each of these operations would involve manipulating the next and prev pointers to maintain the list's structure.

---

## -- General Requirements --

All files compilated on Ubuntu 24.04 LTS
All files ends with a new line
A README.md file, at the root of the folder of the project is mandatory
Code use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
Not allowed to use global variables
No more than 5 functions per file
The only C standard library functions allowed are *malloc*, *free*, *printf* and *exit*
The prototypes of all your functions are included in the header file called *lists.h*
