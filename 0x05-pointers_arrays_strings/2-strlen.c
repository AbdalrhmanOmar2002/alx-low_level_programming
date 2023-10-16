#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: a pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
int str;
for (str = 0; *s != '\0'; s++)
str++;
return (str);
}
