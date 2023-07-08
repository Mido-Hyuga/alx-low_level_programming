#include "main.h"

/**
*_abs - return num absolute value
*@n: var to be checked
*Return: abs value
*/

int _abs(int n)
{
	if (n != 0)
	{
		if (n > 0)
		{
			return (n);
		}
		else
		{
			return (-n);
		}
	}
	else
	{
		return (0);
	}
}

