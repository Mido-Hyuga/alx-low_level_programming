#include "main.h"

/**
* _strcmp - the function .
* @s1: 1st string.
* @s2: 2nd string.
* Return: return value.
*/
int _strcmp(char *s1, char *s2)
{
	int i, a = 0, b = 0, cmpr, g;

	while (*(s1 + a) != '\0')
		a++;
	while (*(s2 + b) != '\0')
		b++;
	if (a > b)
		g = a;
	else
		g = b;
	for (i = 0; i < g; i++)
	{
		if (*(s1 + i) < *(s2 + i) || *(s1 + i) > *(s2 + i))
		{
			cmpr = *(s1 + i) - *(s2 + i);
			break;
		}
		else
			cmpr = 0;
	}
	return (cmpr);
}
