#include <stdio.h>

/*
    !  well return warning
*/

/*
^ void foo(int x)
^ {
^    printf("Hello From Foo()\n")
^}
*/

/*
    !  to avoid warning use this
*/

/*
^void foo(int a __attribute__((unused)))
^{
^    printf("%d\n", a);
^    printf("Hello From Foo()\n");
^}
*/
/*
    !  or this
*/
void foo(int a)
{
    printf("%d\n", a);
    printf("Hello From Foo()\n");
    (void)a; //? unused parameter
}

int main()
{
    int x = 10;
    foo(x);
    return 0;
}