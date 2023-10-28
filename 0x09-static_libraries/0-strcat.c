#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: char pointer
 * @src: char pointer
 *
 * Return: pointer to the resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
int i = 0;
int l;
while (dest[i])
{
i++;
}
for (l = 0; src[l]; l++)
{
dest[i++] = src[l];
}
return (dest);
}
