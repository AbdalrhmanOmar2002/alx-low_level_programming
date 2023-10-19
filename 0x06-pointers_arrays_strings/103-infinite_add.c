#include "main.h"

/**
 * infinite_add - adds two numbers.
 *
 * @n1: char pointer
 * @n2: char pointer
 * @r: char pointer
 * @size_r: int pointer
 *
 * Return: Nothing
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
int i = 0, j = 0, k, l = 0, f, s, d = 0;

while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;

l = (i > j) ? i : j;

if (l + 2 > size_r)
return (0);

r[l + 1] = '\0';

for (k = l; k > 0; k--)
{
i--;
j--;
f = (i >= 0) ? n1[i] - '0' : 0;
s = (j >= 0) ? n2[j] - '0' : 0;

r[k] = (f + s + d) % 10 + '0';
d = (f + s + d) / 10;
}

r[0] = d + '0';

if (r[0] == '0')
return (r + 1);

return (r);
}
