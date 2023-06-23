#include "main.h"

/**
*print_triangle - print a # triangle
*@size: size of triangle
*Return: return 0
*/

void print_triangle(int size)
{

	int i, j, k;

	if (size > 0)
	{
		i = 0;
		while (i < size)
		{
			for (j = 1; j < size - i; j++)
				_putchar(32);
			for (k = 0; k <= i; k++)
				_putchar(35);
			_putchar('\n');
			i++;
		}
	}
	else
		_putchar('\n');
}

