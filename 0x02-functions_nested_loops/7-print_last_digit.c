#include "main.h"
/**
* print_last_digit - Print the last digit of a number
* @n : character
* Return: 0 to 9 (Success)
*/
int print_last_digit(int n)
{
	int i;

	i = n % 10;
	if (i < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}
