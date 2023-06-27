#include "main.h"

/**
* rev_string -  reverses a string.
* @s: string.
*/
void rev_string(char *s)
{
	int count = 0, i, j;
	char str;

	while (count >= 0)
	{
		if (s[count] == '\0')
			break;
		count++;
	}
	for (i = 0; i < (count - 1); i++)
	{
		for (j = i + 1; j > 0; j--)
		{
			str = *(s + j);
			*(s + j) = *(s + (j - 1));
			*(s + (j - 1)) = str;
		}
	}
}
