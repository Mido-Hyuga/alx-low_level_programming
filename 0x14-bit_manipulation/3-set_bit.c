#include "main.h"

/**
* set_bit - function that sets the value of a bit to 1 at a given index.
* @n: the numebr.
* @index: index where to add number.
* Return: 1 , or -1 if an there is an error.
*/

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n |= (1 << index);
	return (1);
}
