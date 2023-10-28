#include "main.h"

/**
 * _strstr - searches a string for any of a set of bytes.
 * @haystack: char pointer
 * @needle: char pointer
 *
 * Return: s pointer.
 */

char *_strstr(char *haystack, char *needle)
{
int i, g;

for (i = 0; haystack[i] != '\0'; i++)
{
int match = 1;
for (g = 0; needle[g] != '\0'; g++)
{
if (haystack[i + g] != needle[g])
{
match = 0;
break;
}
}
if (match)
{
return (haystack + i);
}
}

return ('\0');
}
