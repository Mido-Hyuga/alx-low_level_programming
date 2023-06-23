#include "main.h"
/**
* print_diagonal - diagonal line on the terminal.
* @n: integer
* Return: Nothing
*/
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			j = 1;
			while (j < i)
			{
				_putchar(' ');
				j++;
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
