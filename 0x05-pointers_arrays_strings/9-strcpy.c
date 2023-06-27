#include "main.h"
#include <string.h>

/**
* *_strcpy -  copies the string pointed to by src.
* @dest: array
* @src: lenght of array
* Return: return i
 */

char *_strcpy(char *dest, char *src)
{
	char *i;

	i = strcpy(dest, src);
	return (i);
}
