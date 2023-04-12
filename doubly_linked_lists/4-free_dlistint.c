#include "lists.h"
/**
 * free_dlistint - frees memory of list
 * @head: pointer top head node
 * return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *frees;

	while (head != NULL)
	{
		frees = head;
		head = head->next;
		free(frees);
	}

	free(head);
}
