#include <stdio.h>

/**
*main - print all possible different combinations of three digits.
*
*Return: return 0
*
*/

int main(void)
{
	int ch, ch1, ch2;

	for (ch = '0'; ch <= '7'; ch++)
	{
		for (ch1 = ch + 1; ch1 <= '8'; ch1++)
		{
			for (ch2 = ch1 + 1; ch2 <= '9'; ch2++)
			{
				putchar(ch);
				putchar(ch1);
				putchar(ch2);
				if (ch == '7' && ch1 == '8' && ch2 == '9')
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
