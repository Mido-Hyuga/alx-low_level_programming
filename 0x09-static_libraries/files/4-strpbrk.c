#include "main.h"


/**
* *_strpbrk - searches a string for any of a set of bytes
* @s: string to search in
* @accept: string to match
* Return: s
*/


char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	do {
		for (i = 0; *(accept + i); i++)
		{
			if (*(accept + i) == *s || *(accept + i) == 0)
				return (s);
		}
	} while (*s++);
	return (0);
}
