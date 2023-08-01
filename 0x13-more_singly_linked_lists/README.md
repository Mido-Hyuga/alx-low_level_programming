# C - More Singly Linked Lists

## Description
This repository contains C programs that demonstrate the usage of singly linked lists. It includes functions to add, remove, and remake nodes at a specific index of a `listint_t` linked list.

## Data Structure
The data structure used for this project is defined as follows:

```c
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;
```

## Files
1. `0-print_listint.c`: A function that prints all elements of a `listint_t` linked list.
2. `1-listint_len.c`: A function that returns the number of elements in a `listint_t` linked list.
3. `2-add_nodeint.c`: A function that adds a new node at the beginning of a `listint_t` linked list.
4. `3-add_nodeint_end.c`: A function that adds a new node at the end of a `listint_t` linked list.
5. `4-free_listint.c`: A function that frees a `listint_t` linked list.
6. `5-free_listint2.c`: A function that frees a `listint_t` linked list and sets the head to `NULL`.
7. `6-pop_listint.c`: A function that deletes the head node of a `listint_t` linked list and returns its data.
8. `7-get_nodeint.c`: A function that returns the nth node of a `listint_t` linked list.
9. `8-sum_listint.c`: A function that returns the sum of all the data (n) of a `listint_t` linked list.
10. `9-insert_nodeint.c`: A function that inserts a new node at a given position in a `listint_t` linked list.
11. `10-delete_nodeint.c`: A function that deletes a node at a given index of a `listint_t` linked list.

## How to Use
1. Clone this repository to your local machine.
2. Compile the C programs using a C compiler (e.g., `gcc -Wall -Werror -Wextra -pedantic *.c -o linked_list`).
3. Run the executable to test the various linked list functions.

Feel free to explore the code, modify it as needed, and use it to understand the implementation of singly linked lists in C. Happy coding!
