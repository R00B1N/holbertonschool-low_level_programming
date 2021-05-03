#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at a given idx
 * @head: the inital pointer to the linked list
 * @idx: the index
 * @n: new data
 * Return: the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	if (*head && idx)
		return (insert_nodeint_at_index(&(*head)->next, idx - 1, n));
	if (idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
