#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given point
 * @head: head of the linked list
 * @index: index where the new node should be added. index starts at 0
 * return: 1 if successful and -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr;
	listint_t *result  = *head;
	unsigned int i = 0;

	/* if the linked list is empty -1 */
	if (*head == NULL)
	{
		return (-1);
	}
	ptr = *head;
	/* if the index is null */
	if (!index)
	{
		result = result->next;
		free(*head);
		/* The new head is the result (tricky AF) */
		*head = result;
		/* Success Return 1 */
		return (1);
	}

	/* Move the list */
	while (i < index - 1)
	{
		/* -1 if the result value coming NULL */
		if (result == NULL)
		{
			return (-1);
		}
		/* Move it */
		result = result->next;
		i++;
	}
	/* Return the result */
	ptr = result->next;
	result->next = ptr->next;
	free(ptr);
	return (1);
}
