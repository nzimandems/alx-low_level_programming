#include "lists.h"

/**
* print_listint - function to print integer.
* @h: The linked list where we will use to print its elements
*
* return: The number of elements in the lined list
*/
size_t print_listint (const listint_t *h)
{
	size_t i = 0;
	const listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		ptr = ptr->next;
		i++;
	}
	return (i);
}
