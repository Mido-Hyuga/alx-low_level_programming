# C - File I/O

This repository provides an in-depth exploration of File Input/Output (I/O) concepts in C programming. It covers fundamental topics related to file handling and manipulation, including the use of system calls, file descriptors, permissions, and more.

## Topics Covered

- **Creating, Opening, Closing, Reading, and Writing Files**: Learn how to create, open, close, read, and write files using C programming.

- **Understanding File Descriptors**: Understand the concept of file descriptors and how they are used to uniquely identify files in an operating system.

- **Standard File Descriptors**: Explore the three standard file descriptors (stdin, stdout, stderr), their purposes, and their POSIX names.

- **Working with I/O System Calls**: Gain insight into how to use I/O system calls such as `open`, `close`, `read`, and `write` to interact with files.

- **File Descriptor Flags**: Discover the flags `O_RDONLY`, `O_WRONLY`, and `O_RDWR` and learn how they control file access modes.

- **File Permissions**: Understand the significance of file permissions and how to set them when creating a file using the `open` system call.

- **Additional File I/O Functions**: Implement and explore additional functionalities using custom C programs:
  - `0-read_textfile.c`: Read and print the contents of a text file to the standard output.
  - `1-create_file.c`: Create a new file with specified text content.
  - ...

- **System Calls vs. Functions**: Differentiate between system calls and functions and understand their roles in the context of file I/O operations.

## How to Use

1. Clone this repository to your local machine.

2. Explore the individual files and code snippets to understand each concept thoroughly.

3. Modify and experiment with the provided code to gain hands-on experience with file I/O operations in C.

4. Compile the C programs using a C compiler (e.g., `gcc -Wall -Werror -Wextra -pedantic *.c -o file_io`).

5. Run the compiled executables to observe the results and better understand the concepts covered.

Feel free to customize and extend the code examples to suit your specific use cases. By delving into this repository, you'll enhance your understanding of file I/O in C programming and be better equipped to work with files in various applications.

Remember, practicing and experimenting with file I/O concepts is key to mastering this essential aspect of C programming. Happy coding!
