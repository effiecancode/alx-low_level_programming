#include "lists.h"

/**
 * free_listint - frees the list
 * @head: header pointer to listin_t
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *temp_node;

	while (head != NULL)
	{
		temp_node = head;
		head = head->next;
		free(temp_node);
	}
}
