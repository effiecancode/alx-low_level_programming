#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index ofa  listint_t
 * @head: A pointer to the head of listint_t
 * @index: The index of the node that should be deleted starting from 0
 * Return: 1 if the node was deleted successfully, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	prev = *head;
	for (i = 0; i < index && prev != NULL; i++)
	{
		current = prev;
		prev = prev->next;
	}

	if (i < index)
		return (-1);

	current->next = prev->next;
	free(prev);

	return (1);
}
