#include "lists.h"
/**
* free_listint - Free a memory location
* @head: head of the linked list
*/

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
	return;
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(head);
}
