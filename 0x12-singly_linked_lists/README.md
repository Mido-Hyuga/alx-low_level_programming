# C - Singly Linked Lists

In this project, we explore the concept of singly linked lists in C. We will understand when and why linked lists are preferred over arrays and learn how to build and utilize linked lists effectively.

## When and Why to Use Linked Lists vs Arrays

Linked lists and arrays are both data structures used to store collections of elements. However, they have different characteristics and use cases.

### Arrays
- Arrays are collections of elements of the same data type stored in contiguous memory locations.
- Accessing elements in an array is fast since it supports direct indexing.
- Arrays have a fixed size, meaning the size is determined at compile-time and cannot be changed during runtime.
- Inserting or deleting elements in an array requires shifting elements, making it inefficient for frequent modifications.

### Linked Lists
- Linked lists are collections of elements (nodes) that are not stored in contiguous memory locations. Each node contains data and a reference to the next node.
- Inserting or deleting elements in a linked list is efficient since it involves updating references, rather than shifting elements.
- Linked lists can dynamically grow or shrink during runtime, as nodes are allocated and deallocated as needed.
- Accessing elements in a linked list requires traversing the list, making it slower compared to direct indexing in arrays.

In general, use arrays when you know the size of the collection in advance and need fast access to elements. Use linked lists when you need a dynamic collection that can efficiently handle insertions and deletions.

## How to Build and Use Linked Lists

The data structure used in this project is a singly linked list. Each node in the linked list, defined by the `list_t` struct, consists of the following components:

```c
typedef struct list_s
{
    char *str;             // Pointer to a dynamically allocated string (malloc'ed string)
    unsigned int len;      // Length of the string
    struct list_s *next;   // Pointer to the next node in the list
} list_t;
```

To build and use a singly linked list, you should:
1. Define a pointer to the head of the list (the first node).
2. Allocate memory for each new node using `malloc`.
3. Assign data to the node's members (e.g., string and its length).
4. Update the `next` pointer to point to the next node in the list.
5. To traverse the list, use a loop that follows the `next` pointers until reaching the end (where `next` is `NULL`).

Remember to deallocate memory using `free` when you are done with the linked list to avoid memory leaks.

Singly linked lists are powerful data structures that offer flexibility and efficiency in handling dynamic collections. By understanding and implementing linked lists, you can efficiently manage and manipulate data in your C programs.
