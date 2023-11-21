#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: struct node
 *
 * Return: the address of the new element, or NULL if it failed
 */

void free_listint(listint_t *head)
{
	listint_t *newNode;

	while (head)
	{
		newNode = head;
		head = head->next;
		free(newNode);
	}
}
