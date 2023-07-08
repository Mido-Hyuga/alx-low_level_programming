#include "main.h"


/**
* *_strstr -  locates a substring.
* @haystack: the string to search in
* @needle: the string to search for
* Return: the beginning of the located substring.
*/


char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle  == 0)
		return (haystack);

	while (*haystack)
	{
		if (*(needle + i) == *(haystack + i))
		{
			while (*(needle + i) == *(haystack + i))
			{
				if (*(needle + (i + 1)) == 0)
					return (haystack);
				i++;
			}
		}
		haystack++;
	}
	return (0);
}
