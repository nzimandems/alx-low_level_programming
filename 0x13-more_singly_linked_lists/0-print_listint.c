#include "lists.h"
/**
 * print_listint - Print all intergers
 * @h: prints all the element of a linked list
 * return: number of elements in the lined list
 *
 * Description: function that prints all the elements of a listint_t list.
 *
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
