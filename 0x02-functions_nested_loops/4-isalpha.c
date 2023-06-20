#include "main.h"
/**
* _isalpha - Check for lowercase or uppercase
* @c : character
* Return: return 0 or 1
*/
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
