#ifndef variadic_functions_h
#define variadic_functions_h

#include <stdio.h>
#include <stdarg.h>

/**
 * struct op - struct with name op.
 * @ch: the type.
 * @f: the call back function.
 */

typedef struct op
{
	char *ch;
	void (*f)(va_list arg);
} op;

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_char(va_list arg);
void print_int(va_list arg);
void print_float(va_list arg);
void print_string(va_list arg);

#endif
