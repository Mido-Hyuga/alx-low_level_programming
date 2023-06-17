#include <stdio.h>

/**
*main - print all possible different combinations of two digits.
*
*Return: return 0
*
*/

int main(void)
{

	int ch, ch1;

	for (ch = '0'; ch <= '8'; ch++)
	{
		for (ch1 = ch + 1; ch1 <= '9'; ch1++)
		{
			putchar(ch);
			putchar(ch1);
			if (ch == '8' && ch1 == '9')
			{
				break;
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
