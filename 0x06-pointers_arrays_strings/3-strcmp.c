#include "main.h"

/**
 * _strcmp - compares two strings.
 *
 * @s1: char pointer
 * @s2: char pointer
 *
 * Return: pointer to the resulting string @dest
 */

int _strcmp(char *s1, char *s2)
{
int i;
int one = 0;
int two = 0;
int compares = 110;
while (s1[one])
{
one++;
}
while (s2[two])
{
two++;
}

if (one < two)
{
compares = -15;
}
else if (one > two)
{
compares = 15;
}
else if (one == two)
{
for (i = 0; s1[i] != '\0'; i++)
{
if (s1[i] == s2[i])
{
compares = 0;
}
else
{
compares = 15;
}
}
}

return (compares);
}
