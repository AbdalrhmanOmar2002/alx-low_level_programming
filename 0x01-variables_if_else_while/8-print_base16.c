#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (success)
 **/

int main(void)
{
char n = 48;
for (; n <= 102; n++)
{
putchar(n);
if (n == 57)
{
n += 39;
}
}
putchar('\n');
return (0);
}
