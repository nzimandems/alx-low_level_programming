#include "lists.h"

/**
 * pop_listint - deates the head node of a listint-t linked list and returns the head node data (n).
 * @head: linked list's head
 * 
 * return: 0 if empty
 */
int pop_listint(listint_t **head)
{
	listint_t *result;
	/* The data (n) */
	int n;

	/* if the linked list is empty return 0 */
	if (!*head)
	{
		return (0);
	}

	result = *head;

	/* head node’s data */
	n = result->n;
	/* Move next */
	*head = result->next;
	/* free the head */
	free(result);

	/* returns the head node’s data (n) */
	return (n);
}
