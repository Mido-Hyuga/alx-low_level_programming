#include <stdio.h>

/**
*main - print [0-9]
*
*Return: return 0
*
*/

int main(void)
{

	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);

}
