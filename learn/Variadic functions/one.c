#include <stdio.h>
#include <stdarg.h>

int variadic_auditon(int count, ...)
{
	va_list args;
	int i, sum;

	va_start(args, count);
	sum = 0;

	for (i = 0; i < count; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);

	return (sum);
}

int main(int count, ...)
{
	printf("Sum: %d\n", variadic_auditon(5, 10, 20, 30, 40, 50));
	printf("Sum: %d\n", variadic_auditon(3, 10, 20, 30));
}
