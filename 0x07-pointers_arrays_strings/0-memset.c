#include "main.h"

/**
 * _memset - fills memory with a constant byte.
 *
 * @s: char pointer
 * @b: char
 * @n:unsigned int
 *
 * Return: pointer s
 */

char *_memset(char *s, char b, unsigned int n)
{
  int num = n;
  int i;
  for (i = 0; i < num; i++)
  {
    s[i] = b;
  }
  return (s);
}
