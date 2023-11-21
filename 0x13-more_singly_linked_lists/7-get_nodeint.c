#include "lists.h"

/**
 * get_nodeint_at_index - Get node at index
 * @head: pointer to struct node
 * @index: unsigned int
 *
 * Return: the nth node of a listint_t linked list
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *newNode;
	unsigned int n = 0;

	for (newNode = head, n = 0;
		 newNode && n < index; newNode = newNode->next, n++)
		;

	return (newNode);
}
