#include "main.h"

/**
* *_strchr - locate a character in a string
* @s: string to search in
* @c: char to lookfor
* Return: char c
*/

char *_strchr(char *s, char c)
{
	unsigned int i = 0;

	while (*(s + i) != 0)
	{
		if (*(s + i) == c)
			return (s + i);
		i++;
	}
	if (*(s + i) == c)
		return (s + i);
	return (0);

}
