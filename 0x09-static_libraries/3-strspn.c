#include "main.h"

/**
 * char_length - get length of array.
 * @a: char of array
 *
 * Return: length of array.
 */

int char_length(char a[])
{
int i = 0;
while (a[i] != '\0')
{
i++;
}

return (i);

}

/**
 * _strspn - gets the length of a prefix substring.
 * @s: char pointer
 * @accept: char pointer
 *
 * Return: s pointer.
 */

unsigned int _strspn(char *s, char *accept)
{
int i, g;

int n1 = char_length(s);

for (i = 0; i < n1; i++)
{
for (g = 0; accept[g] != s[i]; g++)
{
if (accept[g] == '\0')
return (i);
}
}

return (i);

}
