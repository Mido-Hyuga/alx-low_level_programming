#include <stdio.h>
#include <stdlib.h>

/**
* main -  program that prints the opcodes of its own main function.
* @argc: the size of argv.
* @argv: byte numbers.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int (*f)(int, char **) = main;
	int i = 0, nmb;
	unsigned char x;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	nmb = atoi(argv[1]);
	if (nmb < 0)
	{
		printf("Error\n");
		exit(2);
	}
	while (i < nmb)
	{
		x = *((unsigned char *)f + i);
		printf("%.2x", x);
		if (i == nmb - 1)
			continue;
		printf(" ");
	i++;
	}
	printf("\n");
	return (0);
}
