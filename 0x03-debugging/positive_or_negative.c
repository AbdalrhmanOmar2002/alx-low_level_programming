#include "main.h"

/**
 * main - entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (success)
*/

void positive_or_negative(int n)
{
if (n > 0)
{
printf("%i is positive\n", n);
}
else if (n == 0)
{
printf("%i is zero\n", n);
}
else
{
printf("%i is negative\n", n);
}
}
