#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int
 *
 * Return: dest pointer.
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int num = n;
for (i = 0; i < num; i++)
{
dest[i] = src[i];
}

return (dest);

}
