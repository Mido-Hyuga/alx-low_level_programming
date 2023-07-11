#include "main.h"

/**
* str_concat - concatenates two strings.
* @s1: string.
* @s2: string.
* Return: return POINTER.
*/

char *str_concat(char *s1, char *s2)
{
	int len, i = 0, j = 0, k = 0, l = 0;
	char *p;

	if (s1 != 0)
		while (*(s1 + i) != 0)
			i++;
	len = i;

	if (s2 != 0)
		while (*(s2 + j) != 0)
			j++;
	len += j;

	p = malloc(len + 1);

	if (!p)
		return (0);

	while (k < i)
	{
		p[k] = s1[k];
		k++;
	}
	while (l < j)
	{
		p[k] = s2[l];
		k++;
		l++;
	}
	return (p);
}
