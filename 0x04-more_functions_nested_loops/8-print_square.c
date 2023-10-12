#include "main.h"
OBOBOB
/**
 * print_square - prints a square, followed by a new line..
 *
 * @size : input
 *
 * Return : Always O (Success)
 */

void print_square(int size)
{
int i;
int j;
for (j = 0; j < size; j++)
{
if (size <= 0)
{
_putchar('\n');
}
else
{
for (i = 1; i <= size; i++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
