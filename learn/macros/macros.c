#include <stdio.h>
#include <stdlib.h>

// #define NUMBERS 1, \
//                 2, \
//                 3

// int main(int argc, char const *argv[])
// {
//   int x[] = {NUMBERS};

//   for (int i = 0; i < sizeof(x) / sizeof(x[0]); i++)
//   {
//     printf("%d", x[i]);
//   }
//   printf("\n");
//   return 0;
// }

// #define SUMNUM(x) x + x
//! 5 + (5 * 2) + 2

// #define SUMNUM(x) ((x) + (x))

// int main()
// {
//   int n = 0;
//   n = SUMNUM(5) * SUMNUM(2);
//   printf("%d", n);
//   return 0;
// }

// #define min(x, y) ((x) < (y) ? (x) : (y))

// int main()
// {
//   int a = 5, b = 10;

//   int x = min(a, b);
//   printf("x = %d\n", x);

//   int y = min(1, 2);
//   printf("y = %d\n", y);

//   int p_value = 15;
//   int *p = &p_value;
//   int z = min(a + 28, *p);
//   printf("z = %d\n", z);

//   return 0;
// }

#define int char

int main(void)
{
  int i;

  i = 5;
  printf("sizeof(i) = %lu", sizeof(i));
  return (EXIT_SUCCESS);
}