#include "lists.h"
/**
 * add_nodeint - print the new node.
 * @head: the inital pointer to the linked list
 * @n: the number of the new node
 * Return: the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
