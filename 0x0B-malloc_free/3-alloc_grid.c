#include <stdio.h>
#include <stdlib.h>

/**
* alloc_grid - function that concatenates two strings.
* @width: number.
* @height: number.
* Return: pointer.
*/

int **alloc_grid(int width, int height)
{
	int **p;
	int i, j;

	if (width <= 0 || height <= 0)
		return (0);
	p = (int **) malloc(sizeof(int *) * height);
	if (p == 0)
	{
		free(p);
		return (0);
	}
	for (i = 0; i < height; i++)
	{
		*(p + i) = malloc(sizeof(int) * width);
		if (*(p + i) == 0)
		{
			for (j = 0; j < i; j++)
				free(*(p + j));
			free(p);
			return (0);
		}
		for (j = 0; j < width; j++)
			*(*(p + i) + j) = 0;
	}
	return (p);
}
