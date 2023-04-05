#include "lists.h"

/**
 * sum_listint - calculates the sum of all the values in the  listint_t list
 * @head: first node in the linkint_t
 *
 * Return: the sum of all the values
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp_node = head;

	while (temp_node)
	{
		sum += temp_node->n;
		temp_node = temp_node->next;
	}

	return (sum);
}
