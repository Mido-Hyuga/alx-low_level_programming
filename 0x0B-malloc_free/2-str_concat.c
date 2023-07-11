#include <stdlib.h>
/**
* str_concat - concatenates two strings.
* @s1: String.
* @s2: String.
* Return: null or Pointer.
*/
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i = 0, j = 0, len1 = 0, len2 = 0;

	if (s1 != 0)
	{
		while (*(s1 + len1))
			len1++;
	}
	if (s2 != 0)
	{
		while (*(s2 + len2))
			len2++;
	}
	p = malloc(len1 + len2 + 1);
	if (p == 0)
		return (0);
	while (i < len1)
	{
		p[i] = *(s1 + i);
		i++;
	}
	while (j < len2)
	{
		p[i] = *(s2 + j);
		i++;
		j++;
	}
	return (p);
}
