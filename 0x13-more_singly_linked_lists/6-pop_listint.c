#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to struct node
 *
 * Return: head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *newNode;
	int data;

	if (!head || !*head)
	{
		return (0);
	}

	newNode = (*head)->next;
	data = (*head)->n;
	free(*head);
	*head = newNode;

	return (data);
}
