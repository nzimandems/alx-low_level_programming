#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a listin_t list.
 * @head: input node to operate on
 * @n: data on the node
 * return: integer value (success)
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
