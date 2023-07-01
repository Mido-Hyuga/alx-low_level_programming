# C - More Pointers, Arrays, and Strings

## Pointers

Pointers are variables that store memory addresses. They allow us to work directly with memory, access and manipulate data. They are declared using the `*` symbol. To use pointers effectively, you need to understand concepts like referencing (`&` operator) and dereferencing (`*` operator).

## Arrays

Arrays are data structures that store multiple elements of the same type in contiguous memory locations. They provide a way to organize and access related data. To access elements in an array, you use indexing starting from 0. Arrays are declared using square brackets `[]`.

## Differences between Pointers and Arrays

Although pointers and arrays are closely related, they are not the same. Arrays are a collection of elements, while pointers are variables that store memory addresses. However, arrays can decay into pointers, meaning that when an array is used in certain contexts, it is automatically converted into a pointer to its first element.

## Strings

Strings are sequences of characters. In C, strings are represented as arrays of characters terminated by a null character (`'\0'`). You can manipulate strings using various string functions like concatenation, comparison, and copying.

## Scope of Variables

The scope of a variable determines its visibility and lifetime within a program. Variables can have global scope (visible throughout the entire program) or local scope (visible only within a specific block or function).

## Project Functions

1. `char *_strcat(char *dest, char *src);`: Concatenates two strings, appends `src` to `dest`.
2. `char *_strncat(char *dest, char *src, int n);`: Concatenates `n` characters from `src` to `dest`.
3. `char *_strncpy(char *dest, char *src, int n);`: Copies `n` characters from `src` to `dest`.
4. `int _strcmp(char *s1, char *s2);`: Compares two strings lexicographically.
5. `void reverse_array(int *a, int n);`: Reverses the order of elements in an array.
6. `char *string_toupper(char *str);`: Converts all lowercase letters in a string to uppercase.
7. `char *cap_string(char *str);`: Capitalizes the first letter of each word in a string.
8. `char *leet(char *str);`: Encodes a string into "leet" (leet-speak) format.
9. `char *rot13(char *str);`: Applies the ROT13 cipher to a string.
10. `int _putchar(char c);`: Writes a character to the standard output.
11. `void print_number(int n);`: Prints an integer to the standard output.
12. `char *infinite_add(char *n1, char *n2, char *r, int size_r);`: Adds two numbers represented as strings and stores the result in `r`.

These functions provide various utilities for string manipulation, array operations, and number handling. They can be used in your C programs to perform specific tasks efficiently.
