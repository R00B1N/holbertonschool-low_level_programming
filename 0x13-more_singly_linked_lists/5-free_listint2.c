#include "lists.h"
/**
 * free_listint2 - free the list and set head to NULL
 * @head: the inital pointer to the linked list
 * Return: void return
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (!head)
		return;
	while (*head)
		aux = *head, *head = (*head)->next, free(aux);
}
