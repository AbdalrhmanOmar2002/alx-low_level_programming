#include "main.h"

/**
 * cap_string - capitalizes all words of a string.
 *
 * @str: char pointer
 *
 * Return: Nothing
 */

char *cap_string(char *str)
{
int i;
for (i = 0; str[i] != '\0'; i++)
{

if (str[i] == 32 || str[i] == '\n' || str[i] == '.')
{
i++;
if (str[i] >= 97 && str[i] <= 122)
{
str[i] = str[i] - 32;
}
}

if (str[i] == '\t')
{
str[i] = 32;
i++;
str[i] = str[i] - 32;
}
}
return (str);
}
