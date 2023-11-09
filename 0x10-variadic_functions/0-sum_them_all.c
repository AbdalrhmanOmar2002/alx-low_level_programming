#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: first integer
 * Return: sum of parameters
 * Abdalrhman Omar
 */

int sum_them_all(const unsigned int n, ...)
{

	va_list arr;
	int i;
	int x = 0;

	va_start(arr, n);

	for (i = 0; i < (int)n; i++)
	{
		x += va_arg(arr, int);
	}
	va_end(arr);
	return (x);
}
