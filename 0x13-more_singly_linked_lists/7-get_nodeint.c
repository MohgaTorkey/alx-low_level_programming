#include "lists.h"

/**
 * get_nodeint_at_index - locates a given node
 * @head: point to head of list
 * @index: index of node locate
 *
 * Return: if fail NULL otherwise located node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned intnode;

	for (node = 0; node < index; node++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}
