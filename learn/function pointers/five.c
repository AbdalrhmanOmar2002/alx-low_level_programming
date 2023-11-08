#include <stdio.h>

int add(int a, int b)
{
  return a + b;
}
int subtract(int a, int b)
{
  return a - b;
}

// A function that takes two integers and a pointer to a function,
// and apo lies the function to the integers

void apply(int a, int b, int (*operation)(int, int))
{
  int result = operation(a, b);
  printf("Result: %d\n", result);
}

int main()
{
  int a = 5;
  int b = 3;

  int (*add_ptr)(int, int);
  add_ptr = add;

  int (*subtract_ptr)(int, int);
  subtract_ptr = &subtract;

  apply(a, b, add_ptr);
  apply(a, b, subtract_ptr);

  return 0;
}