#include "main.h"

/**
*_isalpha - checks if a character is alphabet
* @c: charachter to be checked
* Return: return 0 or 1
*/

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

