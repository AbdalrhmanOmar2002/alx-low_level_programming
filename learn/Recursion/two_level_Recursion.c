#include <stdio.h>
void move(int n, char a, char c, char b);

int main(void)
{
  int num1;
  char a = 'A';
  char b = 'B';
  char c = 'C';

  printf("please num of disks: ");
  scanf("%d", &num1);

  move(num1, a, c, b);

  return (0);
}

void move(int n, char a, char c, char b)
{
  if (n == 1)
  {
    printf("move from table %c to %c\n", a, c);
  }
  else
  {
    move(n - 1, a, b, c);
    printf("move from table %c to %c\n   ", a, c);
    move(n - 1, b, c, a);
  }
}
