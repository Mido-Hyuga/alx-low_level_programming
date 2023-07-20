#include "3-calc.h"

/**
* main - program that performs simple operations.
* @argc: args counter.
* @argv: aray of arguments.
* Return: 0.
*/

int main(int argc, char *argv[])
{
	int nmb1, nmb2;
	char *o;
	int res;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	nmb1 = atoi(argv[1]);
	nmb2 = atoi(argv[3]);
	o = argv[2];
	if (get_op_func(o) == 0 || o[1] != 0)
	{
		printf("Error\n");
		exit(99);
	}
	if ((*o == '/' || *o == '%') && nmb2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	res = get_op_func(o)(nmb1, nmb2);
	printf("%d\n", res);
	return (0);
}
