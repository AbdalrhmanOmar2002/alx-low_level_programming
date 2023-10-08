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
char ch = 'a';
char ch2 = 'A';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
while (ch2 <= 'Z')
{
putchar(ch2);
ch2++;
}
putchar('\n');
return (0);
}
