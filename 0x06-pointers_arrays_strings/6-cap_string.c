#include "main.h"

/**
 * cap_string - the function to cap the string.
 * @str: the string.
 *
 * Return: return cap string.
 */
char *cap_string(char *str)
{
	int i = 0, j;
	char sow[] = " \t\n,;.!?\"(){}";

	if (*(str + i) >= 97 && *(str + i) <= 122)
		*(str + i) = *(str + i) - 32;
	i++;
	while (*(str + i) != '\0')
	{
		for (j = 0; j < 13; j++)
		{
			if (*(str + i) == *(sow + j))
			{
				if (*(str + i + 1) >= 97 && *(str + i + 1) <= 122)
					*(str + i + 1) = *(str + i + 1) - 32;
			}
		}
		i++;
	}
	return (str);
}
