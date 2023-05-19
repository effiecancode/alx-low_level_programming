#include "lists.h"

/**
 * delete_dnodeint_at_index - Delete node at nth index
 * @head: Head of node
 * @index: index
 * Return: 1 succeed, -1 if fail
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *del_node;
	unsigned int count;

	if (*head == NULL)
		return (-1);

	del_node = *head;
	if (index == 0)
	{
		*head = del_node->next;
		if (del_node->next != NULL)
		{
			del_node->next->prev = NULL;
		}
		free(del_node);
		return (1);
	}
	for (count = 0; del_node != NULL && count < index - 1 ; count++)
	{
		del_node = del_node->next;
	}
	if (del_node == NULL || del_node->next == NULL)
	{
		return (-1);
	}

	if (del_node->next->next != NULL)
	{
		del_node->next = del_node->next->next;
		free(del_node->next->prev);
		del_node->next->prev = del_node;
		return (1);
	}
	else
	{
		free(del_node->next);
		del_node->next = NULL;
		return (1);
	}
	return (-1);
}
