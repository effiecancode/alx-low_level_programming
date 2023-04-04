#include "lists.h"

/**
 * print_listint - prints all the values of the linked list
 * @h: head of linked list of named listint_t
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
