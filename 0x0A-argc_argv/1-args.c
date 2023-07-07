#include <stdio.h>
/**
* main - Print number of arguments, followed by a new line.
* @argc: Int
* @argv: String
* Return: return 0
*/
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
