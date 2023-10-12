#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 *
 * @n : input
 *
 * Return : Always O (Success)
 */

void print_diagonal(int n)
{
int dia, space;
if (n <= 0)
{
_putchar('\n');
}
else
{
for (dia = 1; dia <= n; dia++)
{
for (space = 1; space <= dia - 1; space++)
_putchar(' ');
_putchar(92); /** is equal to '/' char*/
_putchar('\n');
}
}
}
