#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: pointer to head node
 * @str: field of node
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode;

	if (!head)
		return (NULL);

	newNode = malloc(sizeof(list_t));

	if (!newNode)
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

	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
