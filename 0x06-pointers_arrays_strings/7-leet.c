#include "main.h"

/**
 * leet - function to uncode a string.
 * @str: the string.
 *
 * Return: return the new value.
 */
char *leet(char *str)
{
	int i = 0, j;
	char cd[] = "aA4eE3oO0tT7lL1";

	while (*(str + i) != '\0')
	{
		for (j = 0; j < 14; j += 3)
		{
			if (*(str + i) == *(cd + j) || *(str + i) == *(cd + j + 1))
			{
				*(str + i) = *(cd + j + 2);
			}
		}
		i++;
	}
	return (str);
}
