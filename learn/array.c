#include <stdio.h>
#define MAXSIZE 5

int sum(int a[], int n);
int max(int b[], int size);

void main(void)
{
  int days[MAXSIZE] = {34, 35, 33, 58, 40};
  int res_1, res_2;

  res_1 = sum(days, 5);
  res_2 = max(days, 5);
  printf("sum = %d;\nmax = %d;", res_1, res_2);
}

int sum(int a[], int n)
{
  int s = 0;
  int i;
  for (i = 0; i < n; i++)
  {
    s += a[i];
  }
  return (s);
}

int max(int b[], int size)
{
  int m;
  int i;
  m = b[0];
  for (i = 1; i < size; i++)
  {
    if (b[i] > m)
      m = b[i];
  }
  return (m);
}