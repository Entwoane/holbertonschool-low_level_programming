# Doubly Linked Lists

A doubly linked list is a more complex data structure than a singly linked list, but it offers several advantages. The main advantage of a doubly linked list is that it allows for efficient traversal of the list in both directions. This is because each node in the list contains a pointer to the previous node and a pointer to the next node. This allows for quick and easy insertion and deletion of nodes from the list, as well as efficient traversal of the list in both directions.

## SYNTAX:

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
![doubly-linked-list](https://media.geeksforgeeks.org/wp-content/uploads/20240809123741/Insertion-at-the-End-in-Doubly-Linked-List-copy.webp)

---
To create and manipulate a doubly linked list, you would typically define functions to:
- Initialize the list
- Insert nodes (at the beginning, end, or a specific position)
- Delete nodes
- Traverse the list (forward and backward)
- Search for elements
- Free the memory used by the list

Each of these operations would involve manipulating the next and prev pointers to maintain the list's structure.
