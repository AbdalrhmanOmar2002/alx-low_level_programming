#include "main.h"
#define USAGE "Usage: cp file_from file_to\n"
#define ERR_READ "Error: Can't read from file %s\n"
#define ERR_NOT_WRITE "Error: Can't write to %s\n"
#define ERR_NOT_CLOSE "Error: Can't close fd %d\n"
#define PERMISSIONS 0664

/**
 * main - copies the content of a file to another file
 * @ac: number of argument
 * @av: thr terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int main(int ac, char **av)
{
	int from_fp = 0, to_fp = 0;
	ssize_t b;
	char buf[READ_BUFFER_SIZE];

	if (ac != 3)
		dprintf(STDERR_FILENO, USAGE), exit(97);
	from_fp = open(av[1], O_RDONLY);
	if (from_fp < 0)
		dprintf(STDERR_FILENO, ERR_READ, av[1]), exit(98);
	to_fp = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, PERMISSIONS);
	if (to_fp < 0)
		dprintf(STDERR_FILENO, ERR_NOT_WRITE, av[2]), exit(99);

	while ((b = read(from_fp, buf, READ_BUFFER_SIZE)) > 0)
	{
		if (write(to_fp, buf, b) != b)
			dprintf(STDERR_FILENO, ERR_NOT_WRITE, av[2]), exit(99);
	}
	if (b < 0)
	{
		dprintf(STDERR_FILENO, ERR_READ, av[1]), exit(98);
	}

	from_fp = close(from_fp);
	to_fp = close(to_fp);
	if (from_fp)
		dprintf(STDERR_FILENO, ERR_NOT_CLOSE, from_fp), exit(100);

	if (to_fp)
		dprintf(STDERR_FILENO, ERR_NOT_CLOSE, from_fp), exit(100);

	return (EXIT_SUCCESS);
}
