#include "main.h"

/**
* _strspn - get the length of a prefix substring
* @s: initial segment
* @accept: substring
* Return: length
*/


unsigned int _strspn(char *s, char *accept)
{
	int i = 0, j, check = 0;

	while (*(s + i) != 0)
	{
		check = 1;
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == accept[j])
			{
				check = 0;
				break;
			}
			else if (*(accept + (j + 1)) == 0)
				break;
		}
		if (check == 1)
			break;
		i++;
	}

	return (i);

}

