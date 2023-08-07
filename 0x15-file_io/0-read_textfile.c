#include "main.h"
/**
* read_textfile - read a text file and prints it to the POSIX standard output.
* @filename: String.
* @letters: Number.
* Return: write(STDOUT_FILENO, c, rd).
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t opn, rd, wr;

	if (!filename)
		return (0);
	c = (char *)malloc(letters * sizeof(char));
	if (!c)
		return (0);
	opn = open(filename, O_RDONLY);
	rd = read(opn, c, letters);
	wr = write(STDOUT_FILENO, c, rd);
	if (wr < 0 || opn < 0 || rd < 0 || rd != wr)
	{
		free(c);
		return (0);
	}
	free(c);
	close(opn);
	return (wr);
}
