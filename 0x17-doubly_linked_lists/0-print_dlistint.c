#include "lists.h"

/**
 * print_dlistint - print count and elements of a dlistint_t list
 * @h: pointer to the start of the linked list
 *
 * Return: nodes count
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_count++;
	}

	return (node_count);
}
