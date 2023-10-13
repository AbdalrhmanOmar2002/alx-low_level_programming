#include "main.h"

/**
 * print_triangle - prints a triangle
 *
 * @size : the size of the triangle
 *
 * Return : Always O (Success)
 */

void print_triangle(int size)
{
int i, j;
if (size <= 0)
{
putchar('\n');
}
else
{
for (j = 1; j <= size; j++)
{
for (i = 1; i <= size; i++)
{
if ((i + j) <= size)
{
_putchar(' ');
}
else
{
_putchar('#');
}
}
_putchar('\n');
}
}
}
