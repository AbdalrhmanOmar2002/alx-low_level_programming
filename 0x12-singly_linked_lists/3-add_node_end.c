#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list.
 * @head: pointer to head node
 * @str: field of node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = malloc(sizeof(list_t));

	if (!head || !newNode)
		return (NULL);

	if (str)
	{
		newNode->str = strdup(str);
		if (!newNode->str)
		{
			free(newNode);
			return (NULL);
		}
		newNode->len = strlen(newNode->str);
	}
	else
	{
		newNode->str = NULL;
		newNode->len = 0;
	}
	newNode->next = NULL;
	if (*head)
	{
		list_t *current = *head;

		while (current->next)
		{
			current = current->next;
		}
		current->next = newNode;
	}
	else
	{
		*head = newNode;
	}

	return (newNode);
}
