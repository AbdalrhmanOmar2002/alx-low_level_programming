#include <stdio.h>

/*
! 1. passing address to function ( call by references )
?? The call by reference method of
? passing arguments to a function
? copies the address of an
? argument into the formal
? parameter. Inside the function,
? the address is used to access the
? actual argument used in the call.
? It means the changes made to
? the parameter affect the passed
? argument.
*/
// void swap(int *pa, int *pb);

// int main(void)
// {
//   int x = 10;
//   int y = 20;
//   printf("x = %d , y = %d\n", x, y);
//   /*
//     ? we send copy from the variables
//     ! swap(x, y);
//   */
//   swap(&x, &y);
//   printf("x = %d , y = %d\n", x, y);
//   return (0);
// }

// void swap(int *pa, int *pb)
// {
//   int temp;
//   temp = *pa;
//   *pa = *pb;
//   *pb = temp;
// }

/*
! 2. Return more than one value from a function
??  We can return more than one
??  values from a function by using
??  the method called "call by
??  address", or "call by reference". In
??  the invoker function, we will use
??  two variables to store the results,
??  and the function will take pointer
??  type data. So we have to pass the
??  address of the data.
??  In this example, we will see how
??  to define a function that can
??  return quotient and remainder
??  after dividing two numbers from
??  one single function.
*/
// int div(int a, int b, int *q, int *r);

// int main(void)
// {
//   int x = 7;
//   int y = 3;
//   int dd, rr;

//   printf("x= %d , y = %d\n", x, y);
//   div(x, y, &dd, &rr);
//   printf("x= %d , y = %d div = %d  reminder = %d\n", x, y, dd, rr);

//   return (0);
// }
// int div(int a, int b, int *q, int *r)
// {
//   *q = (a / b);
//   *r = (a % b);
//   return (*r, *q);
// }

/*
! 3. Pass arrays and strings more conveniently from one function to another

??  To pass an entire array to a function, only
??  the name of the array is passed as an
??  argument.

*   To pass multidimensional arrays to a
*   function, only the name of the array is
*   passed to the function(similar to one-
*   dimensional arrays).

^   In C programming, you can pass arrays to
^   functions, however, you cannot return
^   arrays from functions.

*/

// int *sum(int a[3], int b[3]);
// int main(void)
// {
//   int a[3] = {3, 5, 8};
//   int b[3] = {6, 7, 2};
//   int *c;

//   c = sum(a, b);
//   for (int i = 0; i < 3; i++)
//   {
//     printf("%d\n", *c++);
//   }
// }
// int *sum(int a[3], int b[3])
// {
//   int i;
//   static int c[3];
//   for (i = 0; i < 3; i++)
//   {
//     c[i] = a[i] + b[i];
//   }
//   return (c);
// }

/*
! 4. Manipulate arrays more easily by moving pointers them (or to parts of
! them),instead of moving the arrays themselves
*/

int main(void)
{
  int a[6] = {3, 5, 6, 10, 15, 60};

  for (int i = 0; i < 6; i++)
  {
    printf("%d\n", a[i]);
  }
  printf("------------------\n");

  for (int i = 0; i < 6; i++)
  {
    printf("%d\n", *(a + i));
  }
}

/*
! 5. Create complex data structures, such as linked lists and binary trees,
! where one data structure must contain references to other data structures
*/