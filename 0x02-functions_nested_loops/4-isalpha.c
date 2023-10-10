#include "main.h"
/**
 * _isalpha - function to check if character is alphabetic
 *
 * @c: character to check
 *
 * Return: 1 if `c` is alphabetic , 0 otherwise (success)
 */

int _isalpha(int c)
{
if (c >= 97 && c <= 122)
return (1);
if (c >= 65 && c <= 90)
return (1);
return (0);
}

