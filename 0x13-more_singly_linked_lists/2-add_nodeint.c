#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of the list
 * @head: header pointer of list_int
 * @n: data
 * Return: the added node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *addnode;

	addnode = malloc(sizeof(listint_t));

	if (addnode == NULL)
		return (NULL);

	addnode->next = *head;
	addnode->n = n;
	*head = addnode;

	return (addnode);
}
