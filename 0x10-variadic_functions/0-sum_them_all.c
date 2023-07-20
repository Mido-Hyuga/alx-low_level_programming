#include "variadic_functions.h"

/**
* sum_them_all -  function that returns the sum of all its parameters.
* @n: number of elements.
* Return: sum of elements
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list mehdi;
	unsigned int i = 0;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(mehdi, n);
	for (i < n)
	{
		sum += va_mehdi(mehdi, int);
		i++;
	}
	va_end(mehdi);
	return (sum);
}
