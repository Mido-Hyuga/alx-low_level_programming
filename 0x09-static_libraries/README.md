# C - Static libraries

## Introduction
In C programming, a static library is a collection of precompiled object files that are linked with your program at compile time. It contains functions, variables, and other code that can be reused across multiple programs. This README will explain what a static library is, how it works, how to create one, and how to use it in your C programs.

## What is a static library?
A static library, also known as an archive, is a file that contains compiled object code. It is created by archiving multiple object files together. When you use a static library in your program, the required object files are extracted from the library and linked directly into your program's executable binary during the compilation process.

## How does a static library work?
When you create a static library, the compiler generates object files (.o) for each source file (.c) containing the functions or code you want to reuse. These object files are then bundled together into a single archive file with the .a extension, which is the static library. When compiling your program, the linker extracts the necessary object files from the library and incorporates them into the final executable.

## Creating a static library
To create a static library, you need to follow these steps:

1. Compile each source file into object files using the `-c` flag:
   ```
   gcc -c file1.c -o file1.o
   gcc -c file2.c -o file2.o
   ```

2. Archive the object files using the `ar` command:
   ```
   ar rcs libmylib.a file1.o file2.o
   ```

   - `r`: Insert or replace files in the archive.
   - `c`: Create the archive if it doesn't exist.
   - `s`: Write an index into the archive.

3. Verify the library was created successfully:
   ```
   ar t libmylib.a
   ```

   This command will display a list of object files contained in the library.

4. Optional: Generate an index for faster library access (not required on all systems):
   ```
   ranlib libmylib.a
   ```

## Using a static library
To use a static library in your program, you need to follow these steps:

1. Include the library's header file(s) in your source code to access the library's functions and declarations.
   ```c
   #include "mylib.h"
   ```

2. Compile your program by linking with the static library using the `-l` flag:
   ```
   gcc myprogram.c -o myprogram -L/path/to/library -lmylib
   ```

   - `-L/path/to/library`: Specify the path where the library is located.
   - `-lmylib`: Link against the library named `mylib.a` (remove the "lib" prefix and ".a" extension).

3. Run your program:
   ```
   ./myprogram
   ```

## Basic usage of ar, ranlib, nm
- `ar`: The ar command is used to create, modify, and extract files from archives. Examples of its usage:
  - `ar rcs libmylib.a file1.o file2.o`: Create or update an archive named `libmylib.a` containing object files `file1.o` and `file2.o`.
  - `ar t libmylib.a`: Display the contents of the archive `libmylib.a`.
- `ranlib`: The ranlib command generates an index (or table of contents) for an archive to improve performance during linking. It is optional and not required on all systems. Example usage:
  - `ranlib libmylib.a`: Generate an index for the archive `libmylib.a`.
- `nm`: The nm command displays the symbols (functions and variables) defined or referenced in object files or libraries. Example usage:
  - `nm libmylib.a`: List the symbols defined in the archive `libmylib.a`.

## Conclusion
Static libraries are a powerful tool in C programming for code reuse and modularization. By creating and using static libraries, you can save time and effort by reusing common code across multiple projects. Understanding the basics of creating, using, and managing static libraries is crucial for efficient and maintainable C programming.
