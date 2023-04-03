#include "lists.h"
#include <stdio.h>

/**
 * print_listint - print all list elements
 * @h: a pointer to head of list
 *
 * Return: number of nodes in list
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		printf("%d\n", h->n);
		h = h->next;
	}

	return (nodes);
}
