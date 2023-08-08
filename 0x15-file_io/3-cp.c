#include "main.h"

/**
* copy_file - Copie the content of one file to another.
* @file_from: Source file.
* @file_to: Destination file.
*/
void copy_file(const char *file_from, const char *file_to)
{
	int opn_from, opn_to, nchars, nwr;
	char buff[1024];

	opn_from = open(file_from, O_RDONLY);
	if (opn_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	opn_to = open(file_to, O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	if (opn_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
		exit(99);
	}
	while ((nchars = read(opn_from, buff, 1024)) > 0)
	{
		nwr = write(opn_to, buff, nchars);
		if (nwr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (nchars == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}
	if (close(opn_from) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opn_from);
		exit(100);
	}
	if (close(opn_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", opn_to);
		exit(100);
	}
}

/**
* main - Main function.
* @argc: Number of arguments.
* @argv: Argument vector.
* Return: 0 on success, other values on failure.
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	copy_file(argv[1], argv[2]);

	return (0);
}
