#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @n: int
 * @head: struct node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;
	if (*head)
	{
		newNode->next = *head;
	}
	*head = newNode;
	return (newNode);
}
