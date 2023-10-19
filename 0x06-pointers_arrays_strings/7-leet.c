#include "main.h"

/**
 * leet - that encodes a string into 1337.
 *
 * @str: char pointer
 *
 * Return: Nothing
 */

char *leet(char *str)
{
char key[] = {'A', 'E', 'O', 'T', 'L'};
char value[] = {4, 3, 0, 7, 1};
unsigned int i, c;
for (c = 0; str[c] != '\0'; c++)
{
for (i = 0; i < sizeof(key) / sizeof(char); i++)
{
if (str[c] == key[i] || str[c] == key[i] + 32)
{
str[c] = 48 + value[i];
}
}
}
return (str);
}
