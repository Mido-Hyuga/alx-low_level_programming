#include "main.h"
#include <string.h>
#include <stdio.h>
/**
*puts2 - prints every other character of a string
*@str: string.
*/


void puts2(char *str)
{
	int i;
	int len = strlen(str);

	for (i = 0; i < len; i++)
		if (i % 2 == 0)
			printf("%c", str[i]);
	printf("\n");
}
