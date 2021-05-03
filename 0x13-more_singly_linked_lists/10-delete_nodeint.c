#include "lists.h"
/**
 * delete_nodeint_at_index - deletes a node at a given idx
 * @head: the inital pointer to the linked list
 * @index: the index
 * Return: the new node
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *aux;
	listint_t *prev;
	unsigned int i = 0;

	if (!(*head))
		return (-1);

	aux = *head;
	if (index == 0)
	{
		*head = aux->next;
		free(aux);
		return (1);
	}

	while (i < index)
	{
		if (aux->next)
		{
			prev = aux;
			aux = aux->next;
		}
		else
			return (-1);
		i++;
	}
	prev->next = aux->next;
	free(aux);
	return (1);
}
