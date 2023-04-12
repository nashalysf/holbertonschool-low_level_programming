#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: pointer to head node
 * @n: struct data
 * Return: address of new elmnt
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if ((*head) != NULL)
	{
		while ((*head)->next != NULL)
			(*head) = (*head)->next;
		(*head)->next = ptr;
	}
	else
	{
		*head = ptr;
	}

	ptr->prev = (*head);

	return (ptr);
}
