#include <stdlib.h>
#include "lists.h"

/**
 * free_list - free a list
 * @head: head of linked list
 * Retur: nothing
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((cureent_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
