#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: char pointer
 * @c: char
 *
 * Return: s pointer.
 */
int char_length(char a[]);

char *_strchr(char *s, char c)
{
int i;
int n = char_length(s);

for (i = 0; i < n; i++)
{
if (s[i] == c)
return (s + i);
}

return ('\0');

}

/**
 * char_length - length of array.
 * @a: char array
 *
 * Return: length of array..
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
