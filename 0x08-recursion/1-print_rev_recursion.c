#include "main.h"
#include <stdio.h>

/**
* _print_rev_recursion -  function that prints a string in reverse.
* @s : String.
* Return : Nothing.
*/

void _print_rev_recursion(char *s)
{
	if (*(s + 0) == '\0')
	{
		return;
	}
	_print_rev_recursion(s + 1);
	printf("%c", *(s + 0));
}
