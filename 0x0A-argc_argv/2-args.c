#include <stdio.h>
/**
* main - Print all argument followed by new line.
* @argc: Int
* @argv: String
* Return: return 0
*/
int main(int argc, char *argv[])
{
	int i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}
	return (0);
}
