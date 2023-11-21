#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position.
 * @head: pointer to struct node
 * @idx: index of the list where the new node should be added.
 * @n: int
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode, *temp;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));

	if (!*head || !newNode)
		return (NULL);

	newNode->n = n;

	newNode->next = NULL;
	if (!idx)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}

	temp = *head;
	while (temp)
	{
		if (i == idx - 1)
		{
			newNode->next = temp->next;
			temp->next = newNode;
			return (newNode);
		}
		i++;
		temp = temp->next;
	}
	free(newNode);
	return (NULL);
}
