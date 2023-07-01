#include "main.h"
#include <stdio.h>
/**
* _strncat - the concatnate function.
* @dest: first string.
* @src: second string.
* @n: number of charactres.
* Return: String.
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (i >= 0)
	{
		if (*(dest + i) == '\0')
		{
			while (j < n && *(src + j) != '\0')
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
