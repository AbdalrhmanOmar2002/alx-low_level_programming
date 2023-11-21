#include "lists.h"

/**
 * get_nodeint_at_index - Get node at index
 * @head: pointer to struct node
 *
 * Return:  the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (!head)
		return (NULL);

	while (index)
	{
		head = head->next;
		index--;
	}

	return (head);
}
