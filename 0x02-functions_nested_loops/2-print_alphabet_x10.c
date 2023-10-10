#include "main.h"

/**
 * print—a alphabet - utilizes on the —putchar function to print
 *
 *                the alphabet a - z
 **/
void print_alphabet_x10(void)
{
int ch;
int time = 1;
for(;time <= 10; time++)
for (ch = 'a'; ch <= 'z'; ch++){
_putchar(ch);
}
}
_putchar('\n');
}
