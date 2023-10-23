#include <stdio.h>
/*int str_len(char a[]);
int palind(char a[]);

int main(void)
{

  char name[25];

  printf("Please your name :");
  gets(name);
  printf("length of \" %s \" is = %d\n", name, str_len(name));

  if (palind(name))
  {
    printf("%s is palind\n");
  }
  else
  {
    printf("%s is not palind\n");
  }

  return (0);
}

int str_len(char a[])
{
  int i = 0;
  while (a[i] != '\0')
    i++;
  return (i);
}

int palind(char a[])
{
  int i;
  int pa = 1;
  for (i = 0; i < str_len(a) / 2; i++)
  {
    if (a[i] != a[str_len(a) - 1 - i])
    {
      pa = 0;
      break;
    }
  }
  return (pa);
}*/

void printBinary(int num)
{
  if (num == 0)
  {
    printf("0");
    return;
  }

  int binary[32];
  int i = 0;

  while (num > 0)
  {
    binary[i] = num % 2;
    num /= 2;
    i++;
  }

  for (int j = i - 1; j >= 0; j--)
  {
    printf("%d", binary[j]);
  }
}

int main()
{
  int num = "A"; // Replace with your decimal number
  printf("Binary representation of %d is: ", num);
  printBinary(num);
  printf("\n");
  printf("Binary representation of %d is: %b\n", num, num);
  return 0;
}