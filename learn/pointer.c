#include <stdio.h>

int char_length(char a[])
{
  int i = 0;
  while (a[i] != '\0')
  {
    i++;
  }
  return (i);
}

/*int main(void)
{
  int arr[5] = {100, 200, 300, 400, 500};
  int *ptr;
  int i;
  ptr = &arr[0];
  i = 0;

  while (i < 5)
  {
    printf("Value of ptr: %d\n", *ptr++);
    printf("Value of ptr: %d\n", ++*ptr);
    i++;
  }

  printf("##########\n");

  for (i = 0; i < 5; i++)
  {
    printf("%d\n", arr[i]);
  }
  return (0);
}*/

/* //! Difference between char *a and char a[] */

/*void main(void)
{
  char *name = "Abdalrhman";
  int i;
  int n = char_length(name);
  char *p = name;

  char *t = name;

  printf("%s\n", name);
  for (i = 0; i < n; i++)
  {
    printf("%c\n", *t++);
  }
  printf("%s\n", name);
  printf("%s\n", t);
}*/

/* //! Constant Pointers */

/*int main(void)
{
  int x = 300;
  int y = 200;
  int *const ptr = &x;
  printf("%d\n", *ptr);
  *ptr = 500;
  printf("%d", *ptr);
  return (0);
}*/

/* //! Pointers to Constant  */

/*int main(void)
{
  const int x = 300;
  x = 110;
  int y = 200;
  const int *ptr = &x;
  printf("%p\n", ptr);
  ptr = &y;

  printf("%p", ptr);
  return (0);
}*/

/* //! Pointers to function  */

/*void display(int n);

void main(void)
{
  void (*ptr)(int);
  ptr = display;
  ptr(3);
}

void display(int n)
{
  int i;
  for (i = 1; i <= n; i++)
  {
    printf("Hello Abdo\n");
  }
}*/

/* //! Example Pointers to function  */

/*int add(int a, int b);
int sub(int a, int b);
int mult(int a, int b);
int div(int a, int b);
void main(void)
{
  int num1, num2, op;
  int res;

  int (*ptr[4])(int, int) = {add, sub, mult, div};

  printf("please First number: ");
  scanf("%d", &num1);
  printf("please Second number: ");
  scanf("%d", &num2);
  printf("please Select operation (1-add, 2-sub,3-mult,4-div):");
  scanf("%d", &op);

  res = ptr[op - 1](num1, num2);
  printf("result = %d\n", res);
}
int add(int a, int b) { return (a + b); }
int sub(int a, int b) { return (a - b); }
int mult(int a, int b) { return (a * b); }
int div(int a, int b) { return (a / b); }
*/

/* //! Pointers to array element */

/*void main(void)
{
  int x[] = {100, 200, 300, 400, 500};
  printf("%d\n", x[3]);
  printf("%d\n", *(x + 3));
  printf("%d\n", *(3 + x));
  printf("%d\n", 3 [x]); //* Equals to "printf("%d\n", x[3]);"
}*/

/* //! Pointers to array of string */

/*
? A pointer which pointing to an array which
? content is string, is known as pointer to
? array of strings.

TODO: char *arr[4]={"C","C++","java","VBA"};
TODO: *(*ptr)[4]=&arr;
*/
int main(void)
{
  int i;
  char *arr[4] = {"C", "C++", "java", "VBA"};
  /*
  ??  char **ptr;
  ?? ptr = &arr;
  */
  char *(*ptr)[4] = &arr;

  for (i = 0; i < 4; i++)
  {
    printf("Address of String %d : %p  %p  %s\n", i + 1, *arr[i], arr[i], (*ptr)[i]);
    /*
    ??  printf("Address of String %d: %p  %s\n", i + 1, (void *)arr[i], *ptr++);
    */
  }
  return (0);
}