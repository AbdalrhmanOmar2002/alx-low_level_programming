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
char n = 'z';
for (; n >= 'a'; n--)
{
putchar(n);
}
putchar('\n');
return (0);
}
