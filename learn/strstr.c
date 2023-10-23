#include <stdio.h>
#include <string.h>

int main()
{
  int *p;
  printf("%d\n", sizeof(p));
  printf("%d\n", sizeof(*p));
  const char *haystack = "This is a simple example";
  const char *needle = "simple";

  char *result = strstr(haystack, needle);

  if (result != NULL)
  {
    printf("Substring found: %s\n", result);
  }
  else
  {
    printf("Substring not found in the string.\n");
  }

  return 0;
}
