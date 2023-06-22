#include "main.h"
#include <stdio.h>

/**
* _isupper - check if the characters is uppercase of not.
* @c: int
* Return: Always 0.
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
