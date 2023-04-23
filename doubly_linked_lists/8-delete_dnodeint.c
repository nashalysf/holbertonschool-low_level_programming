#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes node at index
 * @head: head of list
 * @index: index node to delete
 * Return: 1. Sucess -1. Failure
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
dlistint_t *del = *head;
	unsigned int i = 0;

	if (!*head || !head)
		return (-1);
	if (index == 0)
	{
		if ((*head)->next)
		{
			*head = del->next;
			(*head)->prev = NULL;
			free(del);
			return (1);
		}
		free(*head);
		*head = NULL;
		return (1);
	}
	while (del->next)
	{
		if (i == index)
		{
			(del->next)->prev = del->prev;
			(del->prev)->next = del->next;
			free(del);
			return (1);
		}
		i++;
		del = del->next;
	}
	if (index == i)
	{
		(del->prev)->next = NULL;
		free(del);
		return (1);
	}
	return (-1);
}
