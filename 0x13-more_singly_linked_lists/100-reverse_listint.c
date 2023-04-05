#include "lists.h"

/**
i * reverse_listint - Reverses a linked list.
 * @head: A pointer to the first node of a listint_t
 * Return: A pointer to the first node of the new list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *current = *head, *next = NULL;

	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	*head = prev;

	return (*head);
}

