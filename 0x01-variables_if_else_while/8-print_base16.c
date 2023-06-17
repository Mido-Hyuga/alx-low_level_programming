#include <stdio.h>

/**
*main - print numbers of base 16 in lowercase
*
*Return: return 0
*
*/

int main(void)
{

	int ch;

	for (ch = '0'; ch <= '9'; ch++)
		putchar(ch);
	for (ch = 'a'; ch < 'g'; ch++)
		putchar(ch);
	putchar('\n');
	return (0);

}
