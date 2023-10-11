#include "main.h"
/**
 * main - Entry Point.
 *
 * Description: computes the sum of all
 * the multiples of 3 or 5
 * below 1024 (excluded)
 * Return: Always 0 (Success).
 */

int main(void)
{
int i, d;

for (i = 0; i <= 1024; i++)
{
if ((i % 3 == 0) || (i % 5 == 0))
{
d += i;
}
}
printf("%d\n", d);
return (0);
}

