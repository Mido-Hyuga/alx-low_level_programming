#include "main.h"

/**
* *_strncat - concatinates two strings
* @dest: vat to append to
* @src: var to be appended to
* @n: number of chars to append
* Return: dest var
*/

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (*(dest + i) != '\0')
		i++;

	while (j < n && *(src + j) != 0)
	{
		*(dest + i) = *(src + j);
		j++;
		i++;
	}

	return (dest);

}
