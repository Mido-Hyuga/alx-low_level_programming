#include "main.h"

/**
 * string_toupper - the function to change the lower case to upper case.
 *
 * @str: the string
 *
 * Return: return to upper.
 */

char *string_toupper(char *str)
{
	int i = 0;

	for (i = 0; *(str + i); i++)
	{
		if (*(str + i) <= 122 && *(str + i) >= 97)
		{
			*(str + i) = *(str + i) - 32;
		}
	}
	return (str);
}
