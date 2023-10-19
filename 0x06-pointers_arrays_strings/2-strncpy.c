#include "main.h"

/**
 * _strncpy - that copies a string.
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int pointer
 *
 * Return: pointer to the resulting string @dest
 */
char *_strncpy(char *dest, char *src, int n)
{
int i;
for (i = 0; i < n && src[i] != '\0'; i++)
{
dest[i] = src[i];
}

while (i < n)
{
dest[i] = '\0';
i++;
}
return (dest);
}