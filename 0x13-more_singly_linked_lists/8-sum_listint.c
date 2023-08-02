#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint linked list.
 * @head: head of the linked list
 * return: 0 if the list is empty.
 */
int sum_listint(listint_t *head)
{
	int ptr;

	/* initialize the result */
	ptr = 0;

	/* if the linked list is empty return 0 */
	if (!head)
	{
		return (0);
	}

	while (head)
	{
		/* sum and move */
		ptr = ptr + head->n;
		head = head->next;
	}
	/* Return the result */
	return (ptr);
}
