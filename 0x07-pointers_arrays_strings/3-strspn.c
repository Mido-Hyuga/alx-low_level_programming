#include "main.h"
/**
* _strspn - gets the length of a prefix substring.
* @s: string
* @accept: string
* Return: integer
*/
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, k, j;

	while (*(s + i) != '\0')
	{
		k = 0;
		for (j = 0; *(accept + j); j++)
		{
			if (accept[j] == *(s + i))
			{
				k = 1;
				break;
			}
		}
		if (k == 0)
			break;
		i++;
	}
	return (i);
}
