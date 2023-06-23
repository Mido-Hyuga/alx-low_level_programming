#include "main.h"
/**
* print_number - Print number
* @n: integer
* Return: Nothing
*/
void print_number(int n)
{
	int i = n;

	if (n < 0)
	{
		i = -i;
		_putchar('-');
	}
	if (i > 9)
		print_number(i / 10);
	_putchar(i % 10 + '0');
}
