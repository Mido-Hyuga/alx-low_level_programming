#include "function_pointers.h"

/**
* int_index - function that searches for an integer.
* @array: the array.
* @size: size of array.
* @cmp: call-back pointer function.
* Return: 0 or i.
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == 0 || cmp == 0)
		return (-1);
	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);
	return (-1);
}
