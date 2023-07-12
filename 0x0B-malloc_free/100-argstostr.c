#include "main.h"
#include <stdlib.h>
/**
* argstostr - concatenates all the arguments of your program.
* @ac: Integer
* @av: String
* Return: Poniter
*/

char *argstostr(int ac, char **av)
{
	int i, j, k, len = 0, index = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
		len++;
	}

	str = malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (k = 0; av[i][k] != '\0'; k++)
		{
			str[index] = av[i][k];
			index++;
		}
		str[index] = '\n';
		index++;
	}
	str[index] = '\0';

	return (str);
}
