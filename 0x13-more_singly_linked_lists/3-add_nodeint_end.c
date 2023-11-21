#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the beginning of a listint_t list.
 * @n: int
 * @head: struct node
 *
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode, *temp;

	newNode = malloc(sizeof(listint_t));

	if (!head || !newNode)
		return (NULL);

	newNode->next = NULL;
	newNode->n = n;

	if (!*head)
	{
		*head = newNode;
	}
	else
	{
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = newNode;
	}

	return (newNode);
}
