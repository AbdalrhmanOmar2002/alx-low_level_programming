#include "main.h"

/**
 * puts2 - reverses a string.
 *
 * @str: a pointer to the string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
int num, i;
for (num = 0; str[num] != '\0'; num++)
{
if (i % 2 == 0)
_putchar(str[i]);
}
_putchar('\n');
}
