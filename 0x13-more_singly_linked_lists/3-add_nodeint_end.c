#include "lists.h"
/**
 * add_nodeint_end - print the last node.
 * @head: the inital pointer to the linked list
 * @n: the content of the new node
 * Return: the new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *aux;

	if (!head)
		return (0);
	aux = *head;
	new = malloc(sizeof(listint_t));
	if (!new)
		return (0);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (aux->next)
		aux = aux->next;
	aux->next = new;
	return (new);
}
