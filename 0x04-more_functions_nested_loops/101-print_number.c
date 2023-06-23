#include "main.h"

/**
* print_number - print numbers.
* @n: the number.
*/

void print_number(int n)
{
	int num = n;

	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	if (num > 9)
	{
		print_number(num / 10);
	}
	_putchar(num % 10 + '0');
}
