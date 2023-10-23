#include <stdio.h>
#include <math.h>

int main(void)
{
  int candidate = 154;
  int i = 0;
  int g = 0;
  int temp = candidate;

  while (candidate != 0)
  {
    candidate /= 10;
    i++;
  }
  while (temp > 0)
  {
    int n = temp % 10;
    printf("%d\n", n);
    g += pow(n, i);
    temp /= 10;
  }

  printf("%d\n", g);

  return 0;
}