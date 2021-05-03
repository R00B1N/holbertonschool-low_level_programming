#include <stdio.h>
#include "lists.h"
/**
 * print_list - print all the elements in the list.
 * @h: the inital pointer to the linked list
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	if (!h)
		return (0);
	while (h)
	{
		if (h->str)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		h = h->next;
		counter++;
	}
	return (counter);
}
