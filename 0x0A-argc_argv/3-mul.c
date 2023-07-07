#include <stdio.h>
#include <stdlib.h>
/**
* main -  multiple two numbers
* @argc: Int
* @argv: String
* Return: return 0
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc == 3)
	{
		i = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", i);
	}
	else
		printf("Error\n");
	return (0);
}
