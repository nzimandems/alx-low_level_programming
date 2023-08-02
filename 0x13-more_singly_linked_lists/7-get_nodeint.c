#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth of a listint_t linked list.
 * @head: head of the linked list
 * @index: index of the node, starting at 0
 * return: NULL if the node doesn't exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	/* initialize the counter (need to be unsigned int) */
	counter = 0;

	while (head)
	{
		/* returns the nth node */
		if (counter == index)
		return (head);
		/* move next */
		head = head->next;
		counter++;
	}
	/* NULL if the node doesn't exists */
	return (NULL);
}
