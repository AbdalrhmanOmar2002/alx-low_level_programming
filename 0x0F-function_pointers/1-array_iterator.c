#include "function_pointers.h"

/**
 * array_iterator - executes a function given
 * as a parameter on each element of an array.
 * @array: pointer to int
 * @size: size of the array
 * @action: the printing function pointer
 *
 * Return: Nothing.
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
if (array && size && action)
{
while (--size)
{
action(array[size]);
}
}
}
