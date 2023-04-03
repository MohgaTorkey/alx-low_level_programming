#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Return elemten number
 * @h: points to head of list
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
