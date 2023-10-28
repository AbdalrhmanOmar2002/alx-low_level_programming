#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: char pointer
 * @src: char pointer
 * @n: int pointer
 *
 * Return: pointer to the resulting string @dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i = 0;
int l = 0;
while (dest[i])
{
i++;
}
while (l < n && src[l] != '\0')
{
dest[i + l] = src[l];
l++;
}
/*dest[i + l] = '\0';*/
return (dest);
}
