#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a doubly linked list
 * @h: head of dlinked list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nodes = 0;
	dlistint_t *tmp = (dlistint_t *)h;

	if (h)
	{
		while (tmp)
		{
			nodes++;
			tmp = tmp->next;
		}
	}

	return (nodes);
}
