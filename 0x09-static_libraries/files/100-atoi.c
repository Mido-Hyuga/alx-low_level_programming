

#include <stdio.h>
#include <stdlib.h>

/**
* _atoi - convert string to interger
* @s: input to convert
* Return: 0 if not int else interger found
*/

int _atoi(char *s)
{

	unsigned int num = 0;
	int num_sign = 1;

	do {
		if (*s == '-')
			num_sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + *s - '0';
		else if (num > 0)
			break;
	} while (*s++);

	return (num * num_sign);
}

