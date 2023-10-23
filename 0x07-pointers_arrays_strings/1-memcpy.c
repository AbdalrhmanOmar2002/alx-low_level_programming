#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int
 *
 * Return: A pointer to the destination string `dest`.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
for (unsigned int i = 0; i < n; i++)
{
dest[i] = src[i];
}

return dest;
}
