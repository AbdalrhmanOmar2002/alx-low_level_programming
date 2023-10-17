#include "main.h"

/**
 * puts_half - prints half of a string, followed by a new line..
 *
 * @str: a pointer to the string
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
int i, l;
int all;
for (i = 0; str[i] != '\0'; i++)
{
;
}
l = i / 2;
for (all = l; all < i; all++)
{
if (i % 2 == 0)
{
_putchar(str[all]);
}
else
{
_putchar(str[all]);
}
}
_putchar('\n');
}
