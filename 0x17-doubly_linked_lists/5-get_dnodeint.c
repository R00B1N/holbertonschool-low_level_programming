#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at a specific index starting from 0
 * @head: head of doubly linked list
 * @index: index of node, starting from 0
 * Return: address of the node or NULL if the node doesn't exist
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int node = 0;
	dlistint_t *tmp = head;

	if (head)
	{
		while (tmp)
		{
			if (node == index)
			{
				return (tmp);
			}
			node++;
			tmp = tmp->next;
		}
	}

	return (0);
}
