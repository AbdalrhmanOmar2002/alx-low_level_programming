#include "main.h"

/**
 * swap_int - swaps the values of two integers
 *
 *@a : int pointer
 *@b : int pointer
 *
 * Return : Nothing
 */

void swap_int(int *a, int *b)
{
int one = *a;
int two = *b;
*a = two;
*b = one;
}
