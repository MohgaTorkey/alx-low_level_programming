#include "lists.h"

/**
 * pop_listint - delete the head node of list
 * @head: point to head of list
 *
 * Return: if fail NULL otherwise n
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}
