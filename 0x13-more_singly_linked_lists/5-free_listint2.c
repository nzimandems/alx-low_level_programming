#include "lists.h"

/**
 * free_listint2 - frees the listint_t list.
 *@head: node to operate on.
 *
 * return: success
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head)
	{
		return;
	}
	temp = *head;
	while (temp != NULL)
	{
		temp = temp->next;
		free(*head);

		*head = temp;
	}
	*head = NULL;
}
