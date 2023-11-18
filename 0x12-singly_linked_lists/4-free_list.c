#include "lists.h"

/**
 * free_list - frees a list_t list.
 * @head: pointer to head node
 *
 */

void free_list(list_t *head)
{
	free(head);
}
