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

/* Get the lengths of the two strings*/
while (n1[i] != '\0')
i++;
while (n2[j] != '\0')
j++;

l = (i > j) ? i : j;

/* Check if the resulting string can fit into the provided buffer*/
if (l + 2 > size_r)
return (0); /* We add 2: one for potential carry and one for the null terminator*/

r[l + 1] = '\0'; /* Place the null terminator at the end*/

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

/* If there's no carry in the most significant position*/
if (r[0] == '0')
return (r + 1);

return r;
}
