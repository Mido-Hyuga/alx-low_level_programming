#include "main.h"

/**
* _sqrt_recursion - function that returns the natural square root of a number.
* @n: the number.
* Return: return the sqrt.
*/

int _sqrt_recursion(int n)
{
	return (_square(0, n));
}

/**
* _square - calculate the natural square root of a number
* @num: number to be tested
* @y: number to be squared
* Return: square root
*/

int _square(int num, int y)
{
	if (y == 0 || y == 1)
		return (y);
	else if (num > y / 2)
		return (-1);
	else if (num * num == y)
		return (num);
	return (_square(num + 1, y));
}
