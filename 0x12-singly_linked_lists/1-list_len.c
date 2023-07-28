#include "lists.h"

/**
 * list_len - fucntion prints the number of elements in a linked list_t
 * @h: data
 *
 * retuen: always succcess
 */
size_t list_len(const list_t *h)
{
	int count;

	for (count = 0; h !=NULL; count++)
	{
		h = h->next;
	}
	return (count);
}
