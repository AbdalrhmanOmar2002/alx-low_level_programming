#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints string, followed by a new line.
 * @n: number of separators
 * @separator: separator
 * Abdalrhman Omar
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list arr;
	int i;
	char *str;

	va_start(arr, n);

	for (i = 0; i < (int)n; i++)
	{
		str = va_arg(arr, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (separator && i < (int)n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(arr);
}
