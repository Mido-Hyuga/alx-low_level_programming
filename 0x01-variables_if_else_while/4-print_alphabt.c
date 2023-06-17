#include <stdio.h>

/**
*main - all letters except q and e
*
*Return: return 0 every-time
*
*/

int main(void)
{

	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (ch == 'q' || ch == 'e')
			continue;
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
