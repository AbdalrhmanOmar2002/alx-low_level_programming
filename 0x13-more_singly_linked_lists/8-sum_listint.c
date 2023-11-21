#include "lists.h"

/**
 * sum_listint - Sum list
 * @head: pointer to struct node
 *
 * Return: the sum of all the data (n) of a listint_t linked list.
 */

int sum_listint(listint_t *head)
{
	listint_t *newNode = head;
	int sum = 0;

	if (!head || !newNode)
		return (0);

	while (newNode->next)
	{
		newNode = newNode->next;
		sum += newNode->n;
	}

	return (sum);
}
