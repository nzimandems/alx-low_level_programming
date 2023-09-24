#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: node to operate on.
 * @n: node's data.
 *
 * return: integer value as success
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp, *ptr = *head;

	temp = (listint_t *)malloc(sizeof(listint_t));
	if (!temp)
	{
		return (NULL);
	}
	temp->n = n;
	if (ptr == NULL)
	{
		*head = temp;
	}
	else
	{
		while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}
	ptr->next = temp;
	}
	return (temp);
}
