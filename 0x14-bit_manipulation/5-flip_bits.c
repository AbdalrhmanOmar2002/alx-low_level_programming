#include "main.h"

/**
 * flip_bits - the number of bits you would need to flip
 * to get from one number to another.
 * @n: pointing to a unsigned long int
 * @m: unsigned int
 *
 * Return: the number of bits you would need to flip
 * to get from one number to another.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xorV = n ^ m;
	unsigned int count = 0;

	while (xorV)
	{
		if (xorV & 1ul)
			count++;
		xorV = xorV >> 1;
	}
	return (count);
}
