#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all the elements in the list.
 * @h: the inital pointer to the linked list
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		counter++;
	}
	return (counter);
}
