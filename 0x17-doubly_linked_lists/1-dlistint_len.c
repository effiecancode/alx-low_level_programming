#include "lists.h"

/**
 * dlistint_len - counts number of nodes in a linked dlistint_t list.
 * @h: Pointer to head/beginning of the doubly linked list.
 *
 * Return: node count
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
	h = h->next;
	node_count++;
	}

	return (node_count);
}
