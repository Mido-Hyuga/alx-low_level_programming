#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
* main - Multiply two arguments passed to the program.
* @argc: The number of arguments.
* @argv: The array of argument values.
* Return: 0 on success.
*/
int main(int argc, char **argv)
{
	int i = 1, j = 0;
	unsigned long num;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	while (i <= 2)
	{
		while (argv[i][j] != '\0')
		{
			if (isalpha(argv[i][j]))
			{
				printf("Error\n");
				exit(98);
			}
			j++;
		}
		i++;
	}

	num = atol(argv[1]) * atol(argv[2]);
	printf("%lu\n", num);

	return (0);
}
