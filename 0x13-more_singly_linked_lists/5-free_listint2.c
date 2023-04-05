#include "lists.h"

/**
 * free_listint2 - frees listint_t and sets the head to null
 * @head: header pointer to listint_t
 */
void free_listint2(listint_t **head)
{
	listint_t *temp_node;

	if (head == NULL)
		return;

	while (*head)
	{
		temp_node = (*head)->next;
		free(*head);
		*head = temp_node;
	}

	*head = NULL;
}
