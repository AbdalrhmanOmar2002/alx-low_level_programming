#include "main.h"

/**
 * _isdigit - check if c is digit.
 *
 * @c : input for digit
 *
 * Return: 1 if its digit, 0 if other.
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
