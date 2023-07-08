#include "main.h"

/**
*_isdigit - check if c is digit
*@c: var to check
*Return: 1 if digit, else 0
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

