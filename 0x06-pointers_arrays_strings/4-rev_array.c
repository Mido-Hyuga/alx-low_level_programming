#include "main.h"

/**
 * reverse_array - the function.
 * @a: 1st var.
 * @n: 2nd var.
 *
 * Return : return result.
 */
void reverse_array(int *a, int n)
{
	int i, j, tmp;

	for (i = 0; i < n; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			tmp = *(a + i);
			*(a + i) = *(a + j);
			*(a + j) = tmp;

		}
	}
}
