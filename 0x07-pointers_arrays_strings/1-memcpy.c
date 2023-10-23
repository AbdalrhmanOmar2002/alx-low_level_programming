#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: char pointer
 * @src: char pointer
 * @n: unsigned int
 *
 * Return: Nothing.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i;
int num = n;
for (i = 0; i < num; i++)
{
src[i] = dest[i];
}

return (dest);

}