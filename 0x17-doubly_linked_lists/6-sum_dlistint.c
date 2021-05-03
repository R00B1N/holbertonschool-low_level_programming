#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data in a doubly linked list
 * @head: head of doubly linked list
 * Return: sum of n
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *tmp = head;

	if (head)
	{
		while (tmp)
		{
			sum += tmp->n;
			tmp = tmp->next;
		}
	}

	return (sum);
}
