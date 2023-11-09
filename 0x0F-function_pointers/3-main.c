#include "3-calc.h"

/**
 * main - check the code for The school students.
 * @argc: the number of args
 * @argv: argument vector
 *
 * Return: Always 0.
 */

int main(int argc, char **argv)
{
int (*p_fun)(int, int);
int a, b;
if (argc != 4)
printf("Error\n"), exit(98);

a = atoi(argv[1]);
b = atoi(argv[3]);

p_fun = get_op_func(argv[2]);

if (!p_fun)
printf("Error\n"), exit(99);

if (!b && (argv[2][0] == '/' || argv[2][0] == '%'))
printf("Error\n"), exit(100);

printf("%d\n", p_fun(a, b));

return (0);
}
