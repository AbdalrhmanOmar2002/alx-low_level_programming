#include "main.h"

/**
 * rot13 - encodes a string using rot13.
 *
 * @str: char pointer
 *
 * Return: Nothing
 */

char *rot13(char *str)
{

char key[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";

char value[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
unsigned int i, c;
for (c = 0; str[c] != '\0'; c++)
{
for (i = 0; i <= 52; i++)
{
if (str[c] == key[i])
{
str[c] = value[i];
break;
}
}
}
return (str);
}
