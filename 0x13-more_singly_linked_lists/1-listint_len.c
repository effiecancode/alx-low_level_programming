#include "lists.h"

/**
 * listint_len - return num of values in a list
 * @h: header node to the listint_t
 * Return: number ofvalue
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
