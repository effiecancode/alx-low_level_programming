#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of list
 * @head: beginning of list
 * @n: const int value
 * Return: modified dlistint_t
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *dlist = NULL, *end = *head;

	dlist = malloc(sizeof(dlistint_t));

	if (dlist == NULL)
	{
		return (NULL);
	}
	dlist->n = n;
	dlist->prev = NULL;
	dlist->next = NULL;

	if (*head == NULL)
	{
		*head = dlist;
		return (*head);
	}

	while (end->next != NULL)
	{
		end = end->next;
	}
	dlist->prev = end;
	end->next = dlist;

	return (dlist);
}
