#include "lists.h"

/**
 * listint_len - prints the number of element.
 * @h: node to operate on.
 *
 * return: success
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
