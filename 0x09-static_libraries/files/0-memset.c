#include "main.h"

/**
* *_memset - fill memory with constant byte.
* @s: memory area
* @n: number 0f bytes
* @b: constent byte
* Return: s
*/


char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		*(s + i) = b;
	return (s);
}
