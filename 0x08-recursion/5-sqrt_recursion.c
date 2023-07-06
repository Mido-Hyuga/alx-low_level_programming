#include "main.h"

/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: the number.
 *
 * Return: return the sqrt.
 */

int _sqrt_recursion(int n)
{
	if (n == 0 || n == 1)
		return (n);
	return (multiple(0, n));
}

/**
 * multiple - multiple two numbers.
 * @i: initial value.
 * @h: the max value.
 *
 * Return:  the sqrt root.
 */
int multiple(int i, int h)
{
	if (i < h / 2)
	{
		if (i * i == h)
			return (i);
		else
			return (multiple(i + 1, h));
	}
	return (-1);
}
