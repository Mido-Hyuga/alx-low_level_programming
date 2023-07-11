#include <stdio.h>
#include <stdlib.h>

/**
* create_array - function that creates an array of chars.
* @size: Positive int.
* @c: specific char.
* Return: Pointer or NULL .
*/

char *create_array(unsigned int size, char c)
{
	char *p = malloc(sizeof(char) * size);
	unsigned int i = 0;

	if (size == 0 || p == 0)
		return ('\0');

	while (i <= size)
	{
		p[i] = c;
		i++;
	}
	return (p);
}
