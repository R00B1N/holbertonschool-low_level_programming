#include "lists.h"
/**
 * add_node_end - print the last node.
 * @head: the inital pointer to the linked list
 * @str: the content of the new node
 * Return: the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *aux;
	int len = 0;

	if (!head || !str)
		return (0);
	aux = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	if (!new->str)
	{
		free(new);
		return (0);
	}
	while (str[len])
		len++;
	new->len = len;
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
