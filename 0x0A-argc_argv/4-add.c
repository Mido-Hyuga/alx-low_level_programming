#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/**
* main - prints the multiple of two numbers followed by a new line.
* @argc : number of arguments.
* @argv : array of arguments.
* Return : return 0 or 1.
*/
int main(int argc, char *argv[])
{
	int i = 1, j, sum = 0;

	if (argc > 1)
	{
		while (i < argc)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (!isdigit(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			sum += atoi(argv[i]);
		}
		printf("%d\n", sum);
		i++;
	}
	else
		printf("0\n");
	return (0);
}
