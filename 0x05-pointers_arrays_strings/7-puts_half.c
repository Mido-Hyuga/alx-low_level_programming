#include "main.h"
#include <stdio.h>
#include <string.h>

/**
*puts_half - print half of a string
*@str: input to print
*Return: nothing
*
*/

void puts_half(char *str)
{
	int i, len;
	int max_len = strlen(str);

	if (max_len % 2 == 0)
		len = max_len / 2;
	else
		len = max_len / 2 + 1;
	for (i = len; i < max_len; i++)
		printf("%c", str[i]);
	printf("\n");
}

