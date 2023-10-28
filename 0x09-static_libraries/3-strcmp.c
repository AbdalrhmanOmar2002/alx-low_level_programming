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
int compares = 0;
/* printf("\n%s\n", s1);*/
/*printf("%d\n", *s1);*/
/*printf("%d\n", *s2);*/

while (*s1)
{
if (*s1 != *s2)
{
compares = ((int)*s1 - 48) - ((int)*s2 - 48);
break;
}
s1++;
s2++;
}
return (compares);
}
