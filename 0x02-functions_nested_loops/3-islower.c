#include "main.h"

/**
 * _islower - function to check if character is lowercase
 *
 * @c: character to check
 *
 * Return: 1 if `c` is lowercase, 0 otherwise (success)
 */


int _islower(int c)
{
if (c >= 97 && c <= 122)
return (1);
return (0);
}
