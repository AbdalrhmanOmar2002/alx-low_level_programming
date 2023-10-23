// #include <stdio.h>

// int main()
// {

//   /* an array with 5 rows and 2 columns*/
//   int a[5][2] = {{0, 1}, {1, 2}, {2, 4}, {3, 6}, {4, 8}};
//   int i, j;

//   /* output each array element's value */
//   for (i = 0; i < 5; i++)
//   {

//     for (j = 0; j < 2; j++)
//     {
//       printf("a[%d][%d] = %d\n", i, j, a[i][j]);
//     }
//   }

//   return 0;
// }

#include <stdio.h>
int main()
{
  /* 2D array declaration*/
  int disp[2][3];
  /*Counter variables for the loop*/
  int i, j;
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("Enter value for disp[%d][%d]:", i, j);
      scanf("%d", &disp[i][j]);
    }
  }
  // Displaying array elements
  printf("Two Dimensional array elements:\n");
  for (i = 0; i < 2; i++)
  {
    for (j = 0; j < 3; j++)
    {
      printf("%d ", disp[i][j]);
      if (j == 2)
      {
        printf("\n");
      }
    }
  }
  return 0;
}