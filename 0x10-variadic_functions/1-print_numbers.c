#include "variadic_functions.h"


/**
* print_numbers - function that prints numbers, followed by a new line.
* @separator: String Pointer.
* @n: Number of element.
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arg_li;
	unsigned int i = 0;

	va_start(arg_li, n);
	while (i < n)
	{
		printf("%d", va_arg(arg_li, int));
		if (i == n - 1)
			break;
		if (separator != 0)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(arg_li);
}
