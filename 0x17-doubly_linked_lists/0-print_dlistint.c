#include "lists.h"

/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: head of dlinked list
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nodes = 0;
	dlistint_t *tmp = (dlistint_t *)h;

	if (h)
	{
		while (tmp)
		{
			printf("%d\n", tmp->n);
			nodes++;
			tmp = tmp->next;
		}
	}

	return (nodes);
}
