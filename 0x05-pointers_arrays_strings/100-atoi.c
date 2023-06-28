#include "main.h"
/**
* _atoi - transform a string to an int
* @s: the string to be changed
* Return: the converted int
*/
int _atoi(char *s)
{
	int i = 1;
	unsigned int num = 0;

	while (*s)
	{
		if (*s == '-')
			i *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
		s++;
	}
	return (num * i);
}
