#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @n: number of separators
 * @separator: separator
 * Abdalrhman Omar
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list arr;
	int i;

	va_start(arr, n);

	for (i = 0; i < (int)n; i++)
	{
		printf("%d", va_arg(arr, int));
		if (separator && i < (int)n - 1)
		{
			/* code */
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(arr);
}
