#include "main.h"

/**
 * _puts -  prints a string, followed by a new line
 *
 * @str: string will printed
 *
 * Retern: nothing
*/


void _puts(char *str)
{

	int x;

	for (x = 0; *str != '\0'; str++)
	{
		_putchar(*str + 0);
		++x;
	}
	_putchar('\n');
}
