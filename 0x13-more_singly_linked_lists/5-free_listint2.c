#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to struct node
 *
 */

void free_listint2(listint_t **head)
{
	listint_t *newNode, *temp;

	if (!head)
		return;

	newNode = *head;

	while (*head)
	{
		temp = newNode;
		newNode = newNode->next;
		free(temp);
	}
	*head = NULL;
}
