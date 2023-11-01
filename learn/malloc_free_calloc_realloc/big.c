#include <stdio.h>
#include <stdlib.h>

int main()
{
  int index = 0, i = 0, n, *marks;
  int ans;
  marks = (int *)malloc(sizeof(int));

  if (marks == NULL)
  {
    printf("memory cannot be allocated");
    exit(0);
  }
  else
  {
    printf("Memory has been successfully allocated by using malloc\n");
    printf("\n marks = %pc\n", marks); // print the base beg inn i ng address of allocated

    do
    {
      printf("\n Enter marks\n");
      scanf("%d", &marks[index]);
      printf("would you like to add more (1/0): ");
      scanf("%d", &ans);
      if (ans == 1)
      {
        index++;
        marks = (int *)realloc(marks, (index + 1) * sizeof(int));
        // memory by using realloc
        // check if the memory is successfully
        // allocated by realloc or not
        if (marks == NULL)
        {
          printf("memory cannot be allocated");
        }
        else
        {
          printf("memory has been successfully reallocated using realloc: \n");
          printf("\n base address of marks are : %pc", marks);
          // print the base or beginning address of allocated memory
        }
      }
    } while (ans == 1);
    for (i = 0; i <= index; i++)
    {
      printf("marks of students %d are: %d\n ", i, marks[i]);
    }
    free(marks);
  }

  return 0;
}