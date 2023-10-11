#include "main.h"

/**
 * jack_bauer -prints every minute of the day
 * *
 */

void jack_bauer(void)
{
int h;
int m;
for (h = 00; h <= 23; h++)
{
for (m = 00; m <= 59; m++)
{
_putchar((h / 10) + 48);
_putchar((h % 10) + 48);
_putchar(':');
_putchar((m / 10) + 48);
_putchar((m % 10) + 48);
_putchar("\n");
}
}
}

