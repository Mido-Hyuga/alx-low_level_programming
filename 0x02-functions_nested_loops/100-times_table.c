#include "main.h"
/**
* print_times_table - prints Table
* @n: number line and column
**/
void print_times_table(int n)
{

	if (n > 15 || n < 0)
	{
		return;
	}

	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			int value = i * j;

			if (value < 10)
			{
				_putchar(value + '0');
			}
			else
			{
				_putchar((value / 10) + '0');
				_putchar((value % 10) + '0');
			}

			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
