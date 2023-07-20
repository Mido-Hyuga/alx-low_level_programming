#include "variadic_functions.h"

/**
* sum_them_all -  function that returns the sum of all its parameters.
* @n: number.
* Return: sum.
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_li;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(arg_li, n);
	for (i < n)
	{
		sum += va_arg_li(mehdi, int);
		i++;
	}
	va_end(arg_li);
	return (sum);
}
