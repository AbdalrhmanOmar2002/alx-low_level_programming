#include "main.h"
/**
 * print_sign - function to check number sign
 *
 * @n: character to check
 *
 * Return: sign of a number
 */

int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n == 0)
{
_putchar(48);
return (0);
}
else
{
_putchar(45);
return (-1);
}
}
