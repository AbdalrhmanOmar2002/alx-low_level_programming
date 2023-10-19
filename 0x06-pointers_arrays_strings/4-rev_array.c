#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 *
 * @a: int pointer
 * @n: int pointer
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
int g;
int town;

for (g = 0; g < n / 2; g++)
{
town = a[g];
a[g] = a[n - 1 - g];
a[n - 1 - g] = town;
}
}
