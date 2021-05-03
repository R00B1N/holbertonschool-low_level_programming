#include "lists.h"
/**
 * pop_listint - deletes the head node
 * @head: the inital pointer to the linked list
 * Return: returns head nodes data (n)
 */
int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *aux;

	if (!(*head))
		return (0);

	n = (*head)->n;
	aux = *head;
	*head = (*head)->next;
	free(aux);
	return (n);
}
