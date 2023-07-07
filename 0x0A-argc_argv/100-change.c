#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
* @argc: The argument count
* @argv: The argument vector
* Return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
	int cents, ncoins = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int numCoins = sizeof(coins) / sizeof(coins[0]);
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	cents = atoi(argv[1]);

	for (i = 0; i < numCoins; i++)
	{
		ncoins += cents / coins[i];
		cents %= coins[i];
	}

	printf("%d\n", ncoins);
	return (0);
}

