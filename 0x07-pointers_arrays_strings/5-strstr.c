#include "main.h"
/**
* _strstr - locates a substring.
* @haystack: string
* @needle: string
* Return: string
*/
char *_strstr(char *haystack, char *needle)
{
	int i = 0;

	if (*needle == 0)
		return (haystack);
	while (*haystack)
	{
		if (*(haystack + i) == *(needle + i))
		{
			while (*(needle + i) == *(haystack + i))
			{
				if (*(needle + (i + 1)) == 0)
				{
					return (haystack);
				}
				i++;
			}
		}
		haystack++;
	}
	return (0);
}
