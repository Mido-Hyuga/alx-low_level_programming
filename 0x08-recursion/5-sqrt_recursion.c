#include "main.h"

/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n: the number.
* Return: return the sqrt.
*/

int _sqrt_recursion(int n)
{
	return (multiple(0, n));
}

/**
* _square - calculate the natural square root of a number
* @i: number to be tested
* @j: number to be squared
* Return: square root
*/

int multiple(int i, int j);
{
	if (j == 0 || j == 1)
		return (i);
	else if (i > j / 2)
		return (-1);
	else if (i * i == j)
		return (i);
	return (multiple(i + 1, j));
}
