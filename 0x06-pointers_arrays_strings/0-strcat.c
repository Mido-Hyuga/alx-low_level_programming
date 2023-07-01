#include "main.h"
#include <stdio.h>
/**
* _strcat - the concatnate function.
* @dest: first string.
* @src: second string.
* Return: dest.
*/

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (i >= 0)
	{
		if (*(dest + i) == '\0')
		{
			while (*(src + j) != '\0')
			{
				*(dest + i) = *(src + j);
				i++;
				j++;
			}
			break;
		}
		i++;
	}
	return (dest);
}
