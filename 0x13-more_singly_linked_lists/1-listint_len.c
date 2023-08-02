#include "lists.h"

/**
 * listint_len - function will print the number of elements.
 * @h: to operate on node
 *
 * return: number of elements (success)
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	listint_t const *temp;

	temp = h;
	while (temp != NULL)
	{
	count++;
	temp = temp->next;
	}
	return (count);
}
