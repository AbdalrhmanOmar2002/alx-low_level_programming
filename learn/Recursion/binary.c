#include <stdio.h>
void binary(int n);

int main(void)
{
  int num1;
  int z;

  printf("please num: ");
  scanf("%d", &num1);

  printf("binary value of %d = \n", num1);
  binary(num1);
  return (0);
}

void binary(int n)
{
  if (n > 0)
  {
    binary(n / 2);
    printf("%d", (n % 2));
  }
}
