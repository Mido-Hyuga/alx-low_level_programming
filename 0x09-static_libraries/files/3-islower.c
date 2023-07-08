#include "main.h"

/**
*_islower - checks if a character is in lowercase
* @c: charachter to be checked
* Return: return 0 or 1
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

