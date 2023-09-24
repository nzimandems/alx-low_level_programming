#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: input node to operate on.
 * @n: node's data
 *
 * return: integer value as success
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (!temp)
	{
		return (NULL);
	}
	else
	{
		temp->n = n;
		temp->next = *head;
		*head = temp;
		return (temp);
	}
}
