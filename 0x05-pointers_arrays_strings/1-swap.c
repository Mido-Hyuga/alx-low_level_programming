#include "main.h"
/**
* swap_int - swap two variables.
* @a : 1st var.
* @b : 2nd var.
*/
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
