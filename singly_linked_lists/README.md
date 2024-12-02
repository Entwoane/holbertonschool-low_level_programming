# C - Singly linked lists

A singly linked list is a fundamental data structure in computer science and programming, it consists of nodes where each node contains a data field and a reference to the next node in the node. The last node points to null, indicating the end of the list. This linear structure supports efficient insertion and deletion operations, making it widely used in various applications.

### SYNTAX:

```c
struct Node
{
  int Data;
  Struct Node *next;
};
```
This code will create a data type Node, which  will be able to store two values-:

- int value – data
- pointer value – address of the next node

### Understanding Node Structure

In a singly linked list, each node consists of two parts: data and a pointer to the next node. The data part stores the actual information, while the pointer (or reference) part stores the address of the next node in the sequence. This structure allows nodes to be dynamically linked together, forming a chain-like sequence.

![Structure](https://media.geeksforgeeks.org/wp-content/uploads/20240917161540/Singly-Linked-List.webp)

### Operations on Singly Linked List
- Traversal
- Searching
- Length
- **Insertion:**
	- Insert at the beginning
	- Insert at the end
	- Insert at a specific position
- **Deletion:**
	- Delete from the beginning
	- Delete from the end
	- Delete a specific node