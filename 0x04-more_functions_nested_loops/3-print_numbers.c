#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 * only using _putchar twice
 *
 * Return : Always 0 (Success)
 */
void print_numbers(void)
{
char i = 48;
while (i <= 57)
{
_putchar(i);
i++;
}
_putchar('\n');
}
