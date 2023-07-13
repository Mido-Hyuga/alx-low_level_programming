#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc - function that concatenates two strings..
 * @nmemb: number of members.
 * @size: size of one memeber..
 *
 * Return: return pointer or 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (0);
	p = malloc(nmemb * size);
	if (p == 0)
		return (0);
	for (i = 0; i < nmemb * size; i++)
		*(p + i) = 0;
	return (p);
}
