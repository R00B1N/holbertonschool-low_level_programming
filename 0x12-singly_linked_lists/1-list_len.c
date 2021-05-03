#include <stdio.h>
#include "lists.h"
/**
 * list_len - print the length list.
 * @h: the inital pointer to the linked list
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	unsigned int counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		h = h->next;
		counter++;
	}
	return (counter);
}
