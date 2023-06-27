#include "main.h"
#include <stdio.h>
#include <string.h>

/**
* print_array - print array elements
* @n: number of elements to print
* @a: array to be printed
*/


void print_array(int *a, int n)
{
	int i=0;

	while (i < n)
	{
		printf("%d", a[i]);
		if (n != i + 1)
			printf(", ");
		i++;
	}
	printf("\n");
}
