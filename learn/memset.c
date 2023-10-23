#include <stdio.h>
#include <string.h>

// int main()
// {
//   char str[50] = "Hello, World!";

//   printf("Before memset: %s\n", str);

//   // Setting the first 5 characters of str to '-'
//   memset(str, '-', 5);

//   printf("After memset: %s\n", str);

//   return 0;
// }

int main()
{
  char str[50] = "Hello, World!";

  printf("Before memset: %s\n", str);

  // Setting the first 5 characters of str to '-'
  memset(str, '-', 5);

  printf("After memset: %s\n", str);

  return 0;
}