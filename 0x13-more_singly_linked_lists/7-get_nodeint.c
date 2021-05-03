#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a list
 * @head: the inital pointer to the linked list
 * @index: number of node to return
 * Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;
	listint_t *aux;

	if (!head)
		return (0);
	aux = head;
	while (n < index)
	{
		if (aux->next)
			aux = aux->next;
		else
			return (0);
		n++;
	}
	return (aux);
}
