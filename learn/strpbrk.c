#include <stdio.h>
#include <string.h>

int main()
{
  const char *str = "Hello, Worled!";
  const char *accept = "ow";

  char *result = strpbrk(str, accept);

  if (result != NULL)
  {
    printf("The first vowel in the string is: %ld .\n", result - str);
  }
  else
  {
    printf("No vowel found in the string.\n");
  }

  return 0;
}
