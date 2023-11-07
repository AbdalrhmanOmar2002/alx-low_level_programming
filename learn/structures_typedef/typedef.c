#include <stdio.h>
#include <stdlib.h>

// typedef unsigned char byte;

// int main(void)
// {
//   byte c;
//   c = 200;
//   printf("%d", sizeof(c));
//   return 0;
// }

// typedef long long ll;

// int main()
// {
//   ll a = 20;
//   printf("%d", a);
//   return 0;
// }

// typedef struct students
// {
//   char *name;
//   char *branch;
//   int ID_no;
// } stu;

// int main()
// {
//   stu st;
//   st.name = "Abdo";
//   st.branch = "AI";
//   st.ID_no = 10;

//   printf("Name is %s\n", st.name);
//   printf("Branch is %s\n", st.branch);
//   printf("ID_no is %d\n", st.ID_no);
//   return 0;
// }

typedef int *ptr;

int main()
{
  int a = 20;
  ptr var = &a;
  *var = 15;

  printf("%d", *var);
  return 0;
}
