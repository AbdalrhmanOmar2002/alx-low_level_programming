#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *ptr;
  int n, i;

  n = 5;

  printf("Entered number of elements: %d\n", n);

  ptr = (int *)calloc(n, sizeof(int));
  if (ptr == NULL)
  {
    printf("Memory not Allocated.\n");
    exit(0);
  }
  else
  {
    printf("Memory successfully allocated using malloc.\n");
    for (i = 0; i < n; i++)
    {
      ptr[i] = i + 1;
    }
    n = 10;

    ptr = realloc(ptr, n * sizeof(int));
    printf("Entered number of elements: %d\n", n);
    printf("memory successfully re-allocated using realloc.\n");

    for (i = 5; i < n; i++)
    {
      ptr[i] = i + 1;
    }

    printf("The elements of the array are:");
    for (i = 0; i < n; i++)
    {
      printf("%d, ", ptr[i]);
    }
    free(ptr);
  }

  return 0;
}