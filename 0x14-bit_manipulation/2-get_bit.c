#include "main.h"

/**
 * get_bit - the value of a bit at a given index.
 * @n: unsigned long int
 * @index: unsigned int
 *
 * Return: the value of the bit at index index or -1 if an error occurred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit = sizeof(n) * 8;
	char *arr = malloc(bit * sizeof(char));
	int i = 0;

	while (n > 0)
	{
		arr[i] = (n % 2 == 0) ? '0' : '1';
		n = n / 2;
		i++;
	}

	if (index >= i)
	{
		return (-1);
	}

	return (arr[index] - '0');
}
