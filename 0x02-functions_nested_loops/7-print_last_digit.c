#include "main.h"

/**
 * print_last_digit - that computes the absolute value of an integer.
 *
 * @n: takes in integer type input for function
 *
 * Return: Always 0 (Success)
 */

int print_last_digit(int n)
{
int i;
if (n < 0)
{
i = -1 * (n % 10);
}
else
{
i = n % 10;
}
_putchar(i + '0');
return (i);
}
