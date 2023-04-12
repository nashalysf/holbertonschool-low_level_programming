#include "lists.h"
/**
 * add_dnodeint_end - add node at the end
 * @head: pointer to head node
 * @n: struct data
 * Return: address of new elmnt
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr, *h_ref;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	h_ref = *head;

	if (h_ref != NULL)
	{
		while (h_ref->next != NULL)
			h_ref = h_ref->next;
		h_ref->next = ptr;
	}
	else
	{
		*head = ptr;
	}

	ptr->prev = h_ref;

	return (ptr);
}
