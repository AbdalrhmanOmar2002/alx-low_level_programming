#include "main.h"
/**
 * _isalpha - function to check if caracter lowercase
 *
 *@c: checks input function
 *
 * Return: return 1 if 'c' is lowercase
 *              otherwise always 0 (success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
