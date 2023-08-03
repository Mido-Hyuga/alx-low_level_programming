#include "main.h"

/**
* binary_to_uint - function that converts a binary number to an unsigned int.
* @b: pointing to a string of 0 and 1.
* Return: j or 0.
*/

unsigned int binary_to_uint(const char *b)
{
	int i = 0, p = 1;
	unsigned int j = 0;

	if (b == 0)
		return (0);
	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		i++;
	}

	while (i > 0)
	{
		j += (b[i - 1] - '0') * p;
		p *= 2;
		i--;
	}
	return (j);
}
