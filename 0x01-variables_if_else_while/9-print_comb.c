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
int n = 48;
for (; n <= 57; n++)
{
putchar(n);
if (n != 57)
{
putchar(44);
putchar(32);
}
}
putchar('\n');
return (0);
}
