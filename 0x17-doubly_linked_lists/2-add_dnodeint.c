#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning
 * @head: Head node of the list
 * @n: Value
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{

	dlistint_t *temp, *new_node = malloc(sizeof(dlistint_t));


	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	temp = *head;
	new_node->next = temp;
	temp->prev = new_node;
	*head = new_node;
	return (new_node);
}
