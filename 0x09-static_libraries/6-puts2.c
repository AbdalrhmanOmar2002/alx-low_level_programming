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
int num;
for (num = 0; str[num] != '\0'; num++)
{
if (num % 2 == 0)
_putchar(str[num]);
}
_putchar('\n');
}
