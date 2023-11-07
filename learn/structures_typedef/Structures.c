#include <stdio.h>
#include <stdlib.h>

// struct User
// {
//   char *name;
//   char *email;
//   int age;
// };
// struct User *new_user(char *name, char *email, int age)
// {
//   struct User *user;

//   user = malloc(sizeof(struct User));
//   if (user == NULL)
//     return (NULL);
//   user->name = name;
//   user->email = email;
//   user->age = age;
//   return user;
// };

// int main(void)
// {
//   struct User *user;

//   user = new_user("Foo", "foo@foo.bar", 98);
//   if (user == NULL)
//     return (1);
//   printf("User %s created !\n", user->name);
//   printf("His email is: %s\n", user->email);
//   printf("And he is %d years old\n", user->age);
//   return 0;
// }

// struct point
// {
//   int x;
//   int y;
// } my_point;

// int main(void)
// {
//   struct point my_point = {00, 101};
//   struct point *p = &my_point;
//   p->x = 8;
//   printf("%d\t%d", p->x, p->y);
//   return 0;
// }

// struct point
// {
//   int x;
//   int y;
//   int z;
// };

// int main(void)
// {
//   struct point p1 = {.y = 0, .z = 1, .x = 2};
//   struct point p2 = {.x = 20};

//   printf("%d\t%d", p1.x, p2.x);
//   return 0;
// }

// struct point
// {
//   int x;
//   int y;
// };

// int main(void)
// {
//   // Create an array of structures
//   struct point arr[10];

//   // Access array members
//   arr[0].x = 10;
//   arr[0].y = 20;
//   arr[1].x = 30;
//   arr[1].y = 40;
//   printf("%d\t%d\n%d\t%d", arr[0].x, arr[0].y, arr[1].x, arr[1].y);
//   return 0;
// }

