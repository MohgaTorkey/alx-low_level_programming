#include "lists.h"

/**
 * free_listint2 - free a list
 * @head: points to head of list
 *
 * Description: sets the head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;

	while (*head)
	{
		tmp = (*head)->next;
		free(*head);
		*head = tmp;
	}

	head = NULL;
}
