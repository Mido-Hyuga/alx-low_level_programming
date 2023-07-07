# C - argc, argv

This project demonstrates how to use command-line arguments passed to your C program, the different prototypes of the `main` function, and how to compile functions with unused variables or parameters using the `__attribute__((unused))` or `(void)` syntax.

## How to use arguments passed to your program

In C, you can access command-line arguments passed to your program using the `argc` and `argv` parameters of the `main` function. Here's a brief explanation of these parameters:

- `argc` (argument count): It represents the number of command-line arguments passed to the program, including the program name itself.
- `argv` (argument vector): It is an array of strings that holds the actual command-line arguments, where `argv[0]` is the program name, and `argv[1]` to `argv[argc-1]` are the actual arguments.

You can use `argc` and `argv` to process command-line options or perform operations based on user inputs.

## Prototypes of main function

There are two commonly used prototypes of the `main` function in C:

1. `int main(void)`: This prototype does not accept any command-line arguments. It is typically used when your program does not require command-line inputs.
2. `int main(int argc, char *argv[])`: This prototype accepts command-line arguments. It is used when your program needs to process the arguments passed from the command line.

When using the second prototype, you can access the command-line arguments via the `argc` and `argv` parameters, as explained earlier.

## How to use __attribute__((unused)) or (void) to compile functions with unused variables or parameters

Sometimes, in your C program, you may have variables or parameters that are not used within a specific function. To avoid compiler warnings about these unused variables, you can use one of the following techniques:

1. `__attribute__((unused))`: You can annotate the unused variable or parameter with this attribute. For example:
   ```c
   void myFunction(int unusedVariable __attribute__((unused))) {
       // Function body
   }

