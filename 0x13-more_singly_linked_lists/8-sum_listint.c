#include "lists.h"
/**
 * sum_listint - sum all the nodes data (n)
 * @head: the inital pointer to the linked list
 * Return: the new node
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *aux;

	if (!head)
		return (0);
	aux = head;
	while (aux)
	{
		total += aux->n;
		aux = aux->next;
	}
	free(aux);
	return (total);
}
