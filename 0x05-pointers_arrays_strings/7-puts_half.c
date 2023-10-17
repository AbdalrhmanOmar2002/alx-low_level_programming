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
int num;
for (i = 0; str[i] != '\0'; i++)
{
;
}

l = i / 2;
if (i % 2 == 0)
{
for (num = l; num < i; num++)
{
printf("%d", num);
}
}
else
{
for (num = l; num <= i; num++)
{
printf("%d", num);
}
}
}
