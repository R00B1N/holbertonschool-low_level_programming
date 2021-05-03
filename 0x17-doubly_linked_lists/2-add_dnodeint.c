#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a doubly linked list
 * @head: address of the head of the linked list
 * @n: the data of the new node
 * Return: the address of the new element, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (0);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (0);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;
	*head = new;

	return (new);
}
