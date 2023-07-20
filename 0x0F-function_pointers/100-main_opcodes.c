#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints the opcodes of its own main function.
 * @argc: the size of argv.
 * @argv: number of bytes.
 * Return: always 0;
 */

int main(int argc, char *argv[])
{
	int (*f)(int, char **) = main;
	int i, num;
	unsigned char x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("Error\n");
		exit(2);
	}
	for (i = 0; i < num; i++)
	{
		x = *((unsigned char *)f + i);
		printf("%.2x", x);
		if (i == num - 1)
			continue;
		printf(" ");
	}
	printf("\n");
	return (0);
}
