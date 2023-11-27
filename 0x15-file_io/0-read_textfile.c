#include "main.h"

/**
 * read_textfile - prints the binary representation of a number.
 * @filename: file name to reade
 * @letters: number of bytes to read
 *
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fp;
	ssize_t bytes;
	char buf[READ_BUFFER_SIZE * 8];

	if (!filename || !letters)
		return (0);

	fp = open(filename, O_RDONLY);
	if (fp < 0)
		return (0);

	bytes = read(fp, &buf[0], letters);
	bytes = write(STDOUT_FILENO, &buf[0], bytes);
	close(fp);
	return (bytes);
}
