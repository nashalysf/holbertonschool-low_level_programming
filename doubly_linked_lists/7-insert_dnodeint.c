#include "lists.h"
/**
 * insert_dnodeint_at_index - add node at given index
 * @h: pointer to head node
 * @idx: given index
 * @n: given num
 * Return: address of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *h_ref;
	unsigned int index = 0;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL || !idx)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	h_ref = *h;

	if (h_ref != NULL)
	{
		while (h_ref->next != NULL || index == idx)
			h_ref = h_ref->next;
		h_ref->next = ptr;
	}
	else
	{
		*h = ptr;
		add_dnodeint_end(&ptr, n);
	}

	ptr->prev = h_ref;

	return (ptr);
}
