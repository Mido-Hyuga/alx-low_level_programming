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
	unsigned long num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (98);
	}

	if (!is_valid_number(argv[1]) || !is_valid_number(argv[2]))
	{
		printf("Error\n");
		return (98);
	}

	num1 = atol(argv[1]);
	num2 = atol(argv[2]);
	result = num1 * num2;

	printf("%lu\n", result);

	return (0);
}

/**
* is_valid_number - Check if a string contains only digits.
* @str: string.
* Return: 1.
*/
int is_valid_number(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}

	return (1);
}
