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
if (n >= 1)
{
return ("+");
}
else if (n == 0)
{
return (0);
}
else
{
return ("-");
}
}
