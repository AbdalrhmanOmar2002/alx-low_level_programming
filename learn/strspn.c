#include <stdio.h>
#include <string.h>

int main()
{
  const char *str = "12345abcde";
  const char *accept = "1234567890";

  size_t length = strspn(str, accept);

  printf("Length of initial segment: %zu\n", length);

  return 0;
}
