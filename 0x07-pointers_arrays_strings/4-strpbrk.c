#include "main.h"
/**
* _strpbrk - searches a string for any of a set of bytes.
* @s: string
* @accept: string
* Return: string
*/
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (*(s + i))
	{
		for (j = 0; *(accept + j); j++)
			if (accept[j] == *(s + i))
				return (s + i);
		i++;
	}
	return ('\0');
}
