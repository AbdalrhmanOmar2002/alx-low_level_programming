#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: char pointer
 * @accept: char pointer
 *
 * Return: s pointer.
 */

char *_strpbrk(char *s, char *accept)
{

int i, g;
for (i = 0; s[i] != '\0'; i++)
{
for (g = 0; accept[g] != '\0'; g++)
{
if (accept[g] == s[i])
{
return (s + i);
}
}
}

return ('\0');

}
