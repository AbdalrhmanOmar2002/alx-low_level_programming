#include <stdio.h>

int fact(int n)
{
  if (n == 0)
  {
    return (1);
  }
  else
  {
    return (n * fact(n - 1));
  }
}

int main(void)
{
  int num1;
  int z;

  printf("please num to get factorial: ");
  scanf("%d", &num1);

  z = fact(num1);

  printf("factorial %d = %d\n", num1, z);

  return (0);
}