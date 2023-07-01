#include "main.h"
#include <stdio.h>
/**
 * _strcat - the concatnate function.
 *
 * @dest: first string.
 * @src: second string.
 * Return: String.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (i >= 0)
	{
		if (*(dest + i) == '\0')
		{
			for (j = 0; *(src + j) != '\0'; j++)
			{
				*(dest + i) = *(src + j);
				i++;
			}
			break;
		}
		i++;
	}
	return (dest);
}
