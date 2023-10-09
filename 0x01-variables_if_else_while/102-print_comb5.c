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
int first = 0, secon;
while (first <= 99)
{
secon = first;
while (secon <= 99)
{
if (secon != first)
{
putchar((first / 10) + 48);
putchar((first % 10) + 48);
putchar(' ');
putchar((secon / 10) + 48);
putchar((secon % 10) + 48);
if (first != 98 || secon != 99)
{
putchar(',');
putchar(' ');
}
}
secon++;
}
first++;
}
putchar('\n');
return (0);
}
