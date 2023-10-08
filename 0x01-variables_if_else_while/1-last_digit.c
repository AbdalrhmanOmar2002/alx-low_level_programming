#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 *
 * Description: false or true validation
 *
 * Return: 0 (success)
**/

int main(void)
{
int n, last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;
if (n > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, last);
else if (n == 0)
printf("Last digit of %d is zero\n", n);
else
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
return (0);
}
