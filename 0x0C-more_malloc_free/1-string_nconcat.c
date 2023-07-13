#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* string_nconcat - function that concatenates two strings.
* @s1: 1st string.
* @s2:2nd string.
* @n: integer.
* Return: return pointer or 0.
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int c1 = 0, c2 = 0, i, j;

	if (s1 != 0)
		while (*(s1 + c1) != 0)
			c1++;
	else
		s1 = "";
	if (s2 != 0)
		while (*(s2 + c2) != 0)
			c2++;
	else
		s2 = "";
	if (n >= c2)
		n = c2;
	p = malloc(c1 + n + 1);
	if (p == 0)
		return (0);
	for (i = 0; i < c1; i++)
		*(p + i) = *(s1 + i);
	for (j = 0; j < n; j++, i++)
		*(p + i) = *(s2 + j);
	*(p + i) = '\0';
	return (p);
}
