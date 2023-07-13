#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* array_range - function that creates an array of integers.
* @min: Int.
* @max: Int.
* Return: return pointer or 0.
*/
int *array_range(int min, int max)
{
	int i = 0, *p;

	if (min > max)
		return (0);
	p = malloc((max - min + 1) * sizeof(int));
	if (p == 0)
		return (0);
	while (i <= max - min)
	{
		*(p + i) = min + i;
		i++;
	}
	return (p);
}
