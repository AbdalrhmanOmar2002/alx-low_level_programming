#include "main.h"

/**
 * _strcpy - copies the string pointed to by src,
 *including the terminating null byte (\0),
 * to the buffer pointed to by dest.
 *
 * @dest : a pointer to the array
 * @src : number of element in array
 *
 * Return: the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
int i;
int l;
for (i = 0; src[i] != '\0'; i++)
{
;
}
for (l = 0; l <= i; l++)
{
dest[l] = src[l];
}
return (dest);
}
