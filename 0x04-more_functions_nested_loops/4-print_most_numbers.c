#include "main.h"

/**
 * print_most_numbers - prints the numbers, from 0 to 9
 *Do not print 2 and 4
 *only using _putchar twice
 *
 * Return : Always O (Success)
 */
void print_most_numbers(void)
{
char i = 48;
while (i <= 57)
{
if (i == 50 || i == 52)
{
}
else
{
_putchar(i);
}
i++;
}
_putchar('\n');
}
