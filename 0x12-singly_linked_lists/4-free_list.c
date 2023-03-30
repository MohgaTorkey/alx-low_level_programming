#include <stdlib.h>
#include "list.h"

/**
 * free_list - free a list
 * @head: head of linked list
 * Return: nothing
 */

void free_list(list_t *head)
{
	list_t *current_node;

	while ((current_node = head) != NULL)
	{
		head = head->next;
		free(current_node->str);
		free(current_node);
	}
}
