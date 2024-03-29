#include "lists.h"
/**
 * print_dlistint - prints all elements of list
 * @h: pointer to head node
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		printf("%u\n", h->n);
		i++;
		h = h->next;
	}

	return (i);
}
