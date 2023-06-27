#include "main.h"
/**
* _strlen - returns the length of a string.
* @s: string.
* Return: return i.
*/
int _strlen(char *s)
{
	int i, n;

	for (i = 0; s[i] != '\0'; i++)
		n++;
	return (i);
}
