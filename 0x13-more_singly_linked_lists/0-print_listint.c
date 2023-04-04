#include "lists.h"

/**
 * listint_len - returns the value of elements in a linked lists
 * @h: head of  linked list named listint_t
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		count++;
		h = h->next;
	}

	return (count);
}

