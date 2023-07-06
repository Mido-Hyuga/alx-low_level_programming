#include "main.h"

/**
* is_prime_number - function that returns the natural square root of a number.
* @n: the number.
* Return: return the prime number..
*/

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (is_prime(2, n));
}

/**
* is_prime - calclate the prime numbers.
* @i: initial value.
* @h: max value.
* Return: return the prime number.
*/

int is_prime(int i, int h)
{
	if (i < h)
	{
		if (h % i == 0)
			return (0);
		else
			return (is_prime(i + 1, h));
	}
	return (1);
}
