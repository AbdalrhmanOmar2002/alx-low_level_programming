#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to struct node
 * @index: index of the node that should be deleted. Index starts at 0
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *newNode, *temp;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			newNode->next = temp->next;
			free(temp);
			return (1);
		}
		i++;
		newNode = temp;
		temp = temp->next;
	}
	return (-1);
}
