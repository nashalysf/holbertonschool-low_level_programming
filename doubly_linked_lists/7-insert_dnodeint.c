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
	unsigned int i = 0;

	ptr = malloc(sizeof(dlistint_t));

if (!h || (!*h && idx != 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	if (!ptr)
		return (NULL);
	ptr->n = n;
	while (h_ref->next || i == idx)
	{
		if (i == idx)
		{
			h_ref->prev->next = ptr;
			ptr->prev = h_ref->prev;
			ptr->next = h_ref;
			h_ref->prev = ptr;
			return (ptr);
		}
		i++;
		h_ref = h_ref->next;
	}
	if (i + 1 == idx)
	{
		ptr->next = NULL;
		h_ref->next = ptr;
		ptr->prev = h_ref;
		return (ptr);
	}
	free(ptr);
	return (NULL);
}
