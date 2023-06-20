#include "main.h"
/**
* times_table - Print the 9 times table
*/
void times_table(void)
{
	int i, j, k;

	for (i = 0; i <= 9; i++)
	{
		_putchar(48);
		for (j = 1; j <= 9; j++)
		{
			_putchar(44);
			_putchar(32);
			k = i * j;
			if (k >= 10)
			{
				_putchar(k / 10 + '0');
				_putchar(k % 10 + '0');
			}
			else
			{
				_putchar(32);
				_putchar(k + 48);
			}
		}
		_putchar('\n');
	}
}
