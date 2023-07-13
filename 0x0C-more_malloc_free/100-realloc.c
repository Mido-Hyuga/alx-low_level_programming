#include "main.h"

/**
* _realloc - reallocate a memory block
* @ptr: pointer
* @old_size: old size of allocated space
* @new_size: new size of allocated space
* Return: return pointer or 0
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *p;

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}

	if (old_size == new_size)
		return (ptr);

	p = malloc(new_size);

	if (p == 0)
	{
		free(ptr);
		return (0);
	}
	free(ptr);
	return (p);

}
