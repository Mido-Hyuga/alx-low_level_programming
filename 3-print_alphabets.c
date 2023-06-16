#include <stdio.h>

/**
*main - prints the alphabet in lowercase then in uppercase
*
*Return: return 0
*/

int main(void)
{

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++)
		putchar(ch);
	return (0);

}
