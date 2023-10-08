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
char n = '0';
for (; n <= '9'; n++)
{
putchar(n);
putchar(32);
}
return (0);
}
