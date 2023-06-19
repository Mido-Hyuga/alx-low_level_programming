#include <stdlib.h>
#include <stdio.h>
/**
 ** main - Print all possible different combinations of two two-digit
 **
 ** Return: return 0
 */
int main(void)
{
	int i, j, k, z;

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				for (z = '0'; z <= '9'; z++)
				{
					if (k * 10 + z > i * 10 + j)
					{
						putchar(i);
						putchar(j);
						putchar(' ');
						putchar(k);
						putchar(z);
					if (i == '9' && j == '8' && k == '9' && z == '9')
						break;
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

