#include "lists.h"

/**
 * pop_listint - deletes the head node of the listint_t
 * @head: header pointer to the first element in listint_t
 *
 * Return: the data inside value,
 * or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp_node;
	int value;

	if (!head || !*head)
		return (0);

	value = (*head)->n;
	temp_node = (*head)->next;
	free(*head);
	*head = temp_node;

	return (value);
}
