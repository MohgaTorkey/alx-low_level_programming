#include "list.h"

/**
 * sum_listint - calculates sum of data
 * @head: points to head of list
 * Return: if fail NULL otherwise summ of data
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
