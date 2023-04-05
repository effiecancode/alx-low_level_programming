#include "lists.h"

/**
 * get_nodeint_at_index - get the nth node of the listint_t
 * @head: pointer to the head node of listint_t
 * @index: index of the node, starting at 0
 * Return: pointer to the nthn node , or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node = head;

	for (i = 0; i < index && current_node != NULL; i++)
	{
	current_node = current_node->next;
	}

	return (current_node);
}
