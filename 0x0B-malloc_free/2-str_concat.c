#include <stdio.h>
#include <stdlib.h>

/**
* str_concat - function that concatenates two strings.
* @s1: string.
* @s2: string.
* Return: pointer.
*/

char *str_concat(char *s1, char *s2)
{
	int i, j, len1, len2;
	char *p;

	if (s1 != 0)
		for (len1 = 0; *(s1 + len1) != 0; len1++)
			;
	if (s2 != 0)
		for (len2 = 0; *(s2 + len2) != 0; len2++)
			;
	p = malloc(len1 + len2 + 1);
	if (p == 0)
		return (0);
	for (i = 0; i < len1; i++)
		*(p + i) = *(s1 + i);
	for (j = 0; j < len2; j++, i++)
		*(p + i) = *(s2 + j);
	p[i] = '\0';	

	return (p);
}
