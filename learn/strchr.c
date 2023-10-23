#include <stdio.h>
#include <string.h>

int main()
{
  const char *str = "Hello, World!";
  int search_char = 'W';

  char *result = strchr(str, search_char);

  if (result != NULL)
  {
    printf("Character '%c' found at position %ld\n", search_char, result - str);
  }
  else
  {
    printf("Character '%c' not found in the string.\n", search_char);
  }

  return 0;
}