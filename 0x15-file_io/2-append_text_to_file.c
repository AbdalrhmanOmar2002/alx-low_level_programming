#include "main.h"

/**
 * _strlen - returns the length of a string.
 *
 * @s: a pointer to the string
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int i = 0;

	while (!s)
		return (0);
	while (*s++)
		i++;

	return (i);
}

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file name to reade
 * @text_content: thr terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fp;
	ssize_t bytes = 0;
	ssize_t len = _strlen(text_content);

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (len)
		bytes = write(fp, text_content, len);

	close(fp);

	return (bytes == len ? 1 : -1);
}
