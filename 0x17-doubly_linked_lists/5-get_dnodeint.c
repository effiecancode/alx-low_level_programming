#include "lists.h"

/**
 * get_dnodeint_at_index - returns Nth node at index
 * @head: pointer to head node of the list
 * @index: int
 * Return: dlistint_t
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count_node = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		if (index == count_node)
		{
			return (head);
		}
		count_node++;
		head = head->next;
	}
	return (NULL);
}
