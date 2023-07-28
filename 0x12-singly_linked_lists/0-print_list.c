#include "lists.h"

/**
 * print_list - function prints all the elements of a list_t list
 * @h: pointer
 * return: number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	int i;
	
	for (i = 0; h != NULL; i++)	
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
