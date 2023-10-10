#include "main.h"

/**
 * print_alphabet_x10 - utilizes on the —putchar function to print
 *
 *the alphabet a - z * 10
 **/
void print_alphabet_x10(void)
{
int ch;
int time;
for (time = 1; time <= 10; time++)
{
for (ch = 'a'; ch <= 'z'; ch++)
{
_putchar(ch);
}
_putchar('\n');
}
}
