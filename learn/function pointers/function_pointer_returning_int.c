#include <stdio.h>

// function Pointer returning int
int (*sum_ptr)(int, int);

// Function that can be pointed to by sum_ptr
int add(int a, int b)
{
  return a + b;
}

int main()
{
  int a = 5;
  int b = 10;
  sum_ptr = add; // set sum_ptr to point to the add function

  int result = sum_ptr(a, b);

  printf("Result: %d\n", result);

  return 0;
}
