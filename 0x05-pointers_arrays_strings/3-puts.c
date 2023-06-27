#include "main.h"
/**
* _puts - print the string.
*@str: char.
*/
void _puts(char *str)
{
	int i = 0;

	for (i = 0; i >= 0; i++)
	{
		if (str[i] == '\0')
		{
			_putchar('\n');
			break;
		}
		_putchar(str[i]);
	}
}
