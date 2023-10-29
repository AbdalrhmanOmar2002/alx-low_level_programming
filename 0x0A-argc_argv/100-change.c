#include <stdio.h>
#include <stdlib.h>

/**
 * main -prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: int
 * @argv: char
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
if (argc == 2)
{
int i, leastcents = 0, mony = atoi(argv[1]);
int cents[] = {25, 10, 5, 2, 1};
for (i = 0; i < 5; i++)
{
if (mony >= cents[i])
{
leastcents += mony / cents[i];
mony = mony % cents[i];
if (mony % cents[i] == 0)
{
break;
}
}
}
printf("%d\n", leastcents);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}
