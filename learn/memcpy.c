#include <stdio.h>
#include <string.h>

int main()
{
  char source[] = "Hello, World!";
  char destination[20];

  // Copy the content of 'source' into 'destination'
  memcpy(destination, source, strlen(source) + 1); // +1 to copy the null-terminator

  printf("Copied String: %s\n", destination);

  return 0;
}