#include <stdio.h>

/**
* main - PrimeFactor of 612852475143.
*
* Return: return 0.
*/

int main(void)
{
	long int num = 612852475143;
	long int i = 2;

	while (num > 1)
	{
		if (num % i == 0)
		{
			num /= i;
		}
		else
			i++;
	}

	printf("%ld\n", i);
	return (0);
}
