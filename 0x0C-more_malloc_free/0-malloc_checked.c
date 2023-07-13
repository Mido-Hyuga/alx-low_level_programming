#include <stdlib.h>
/**
* malloc_checked - Allocate memory using malloc
* @b: Int
* Return: return Nothing
*/
void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);
	return (p);
}
