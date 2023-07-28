#include "lists.h"

/**
 * free_list - function frees list_t
 * @head: a pointer to the list_t
 * return: void
 */
 void free_list(list_t *head)
{
	list_t *check, *c;

	c = head;
	while (c !=NULL)
	{
		check = c->next;
		free(c->str);
		free(c);
		c = check;
	}
}
