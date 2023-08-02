#include "lists.h"

/**
 * add_nodeint_end - adds node integer to the end of a listint_t list
 * @head: to operate on node
 * @n: data of node
 * return:
 * integer value (success)
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
