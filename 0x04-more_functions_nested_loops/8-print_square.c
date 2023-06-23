#include "main.h"
/**
* print_square - Print squares followed by new line
* @size: integer
* Return: Nothing
*/
void print_square(int size)
{
	int i, j;

	if (size > 0)
		for (i = 1; i <= size; i++)
		{
			j = 1;
			while (j <= size)
			{
				_putchar('#');
				j++;
			}
			_putchar('\n');
		}
	else
		_putchar('\n');
}
