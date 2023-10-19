#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: char pointer
 *
 * Return: Nothing
 */

int isLower(char c)
{
return (c >= 97 && c <= 122);
}
int isDelimiter(char c)
{
int i;
char delimiter[] = " \t\n,.0!?\"(){}";
for (i = 0; i < 12; i++)
{
if (c == delimiter[i])
{
return (1);
}
}
return (0);
}

char *cap_string(char *s)
{
char *ptr = s;
int found = 1;
while (*s)
{
if (isDelimiter(*s))
{
found = 1;
}
else if (isLower(*s) && found)
{
*s -= 32;
found = 0;
}
else
{
found = 0;
}
s++;
}
return (ptr);
}
