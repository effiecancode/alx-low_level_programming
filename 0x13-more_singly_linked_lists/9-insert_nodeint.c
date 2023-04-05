#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in the listint_t
 * at a given position
 * @head: pointer to the first node in the listint_t
 * @idx: index where the new node is to be added
 * @n: values to insert in the new node
 *
 * Return: pointer to the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *ins_node;
	listint_t *temp_node = *head;

	ins_node = malloc(sizeof(listint_t));
	if (!ins_node || !head)
		return (NULL);

	ins_node->n = n;
	ins_node->next = NULL;

	if (idx == 0)
	{
		ins_node->next = *head;
		*head = ins_node;
		return (ins_node);
	}

	for (i = 0; temp_node && i < idx; i++)
	{
		if (i == idx - 1)
		{
			ins_node->next = temp_node->next;
			temp_node->next = ins_node;
			return (ins_node);
		}
		else
			temp_node = temp_node->next;
	}

	return (NULL);
}
