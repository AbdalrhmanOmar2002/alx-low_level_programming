#include "lists.h"

/**
 * find_listint_loop_f1- finds a loop in a linked list.
 * @head: struct node
 *
 * Return: the size of the list that was free’d
 */

listint_t *find_listint_loop_f1(listint_t *head)
{
	listint_t *ptr, *end;

	if (head == NULL)
		return (NULL);

	for (end = head->next; end != NULL; end = end->next)
	{
		if (end == end->next)
			return (end);
		for (ptr = head; ptr != end; ptr = ptr->next)
		{
			if (ptr == end->next)
				return (end->next);
		}
	}
	return (NULL);
}

/**
 * free_listint_safe - frees a listint_t list.
 * @h: struct node
 *
 * Return: the size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *next, *loopnode;
	size_t len;
	int loop = 1;

	if (h == NULL || *h == NULL)
		return (0);

	loopnode = find_listint_loop_f1(*h);

	for (len = 0; (*h != loopnode || loop) && *h != NULL; *h = next)
	{
		len++;
		next = (*h)->next;
		if (*h == loopnode && loop)
		{
			if (loopnode == loopnode->next)
			{
				free(*h);
				break;
			}
			len++;
			next = next->next;
			free((*h)->next);
			loop = 0;
		}
		free(*h);
	}
	*h = NULL;
	return (len);
}
