#include "main.h"
/**
* jack_bauer - Print every minute of the day of JAck Bauer
*
* Return:
*/
void jack_bauer(void)
{
	int i, j, k, x;

	for (i = 0; i <= 2; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (x = 0; x <= 9; x++)
				{
					if (i == 2 && j > 3)
						break;
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(x + '0');
					_putchar('\n');
				}
			}
		}
	}
}
