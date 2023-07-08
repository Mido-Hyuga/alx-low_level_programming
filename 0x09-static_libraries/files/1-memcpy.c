#include "main.h"


/**
* *_memcpy - copy memory area
* @dest: destination to copy to
* @src: source to copy form
* @n: number of bytes.
* Return: destination
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);
	return (dest);

}
