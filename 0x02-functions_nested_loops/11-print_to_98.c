#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - write numbers to 98
 * @n: number
 * Return : nothing
 **/
void print_to_98(int n)
{
	int i;

	if (n < 98)
	{
		printf("%d", n);
		for (i = n + 1; i <= 98; i++)
		{
			printf(", %d", i);
		}
	}
	else
	{
		printf("%d", n);
		for (i = n - 1; i >= 98; i--)
		{
			printf(", %d", i);
		}
	}
	printf("\n");
}
