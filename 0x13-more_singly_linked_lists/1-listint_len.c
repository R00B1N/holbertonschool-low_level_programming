#include <stdio.h>
#include "lists.h"
/**
 * listint_len - print the length list.
 * @h: the inital pointer to the linked list
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
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
