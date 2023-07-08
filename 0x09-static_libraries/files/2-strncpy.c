#include "main.h"

/**
* *_strncpy - concatinates two strings
* @dest: vat to append to
* @src: var to be appended to
* @n: number of chars to append
* Return: dest var
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;
	int ls = 0;

	while (*(src + ls) != 0)
		ls++;

	while (i < n)
	{
		if (i >= ls)
			*(dest + i) = 0;
		else
			*(dest + i) = *(src + i);
		i++;
	}

	return (dest);

}
