#include "lists.h"

/**
 * free_dlistint - Free list
 * @head: struct
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *dlist;

	while (head)
	{
		dlist = head;
		head = head->next;
		free(dlist);
	}
}
