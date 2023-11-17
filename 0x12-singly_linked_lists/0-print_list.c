#include "lists.h"

/**
 * _strlen - returns the length of a string
 * @s: input string
 * Return: length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}

/**
 * print_list - prints all the elements of a list_t list.
 * @h: int
 *
 * Return: the number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		i++;
	}

	return (i);
}
