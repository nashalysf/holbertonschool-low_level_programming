#include "lists.h"
/**
 * list_len - returns number of elmnts in list_t
 * @h: pointer to head node
 * Return: number elmnts
 */
size_t list_len(const list_t *h)
{
	unsigned int i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}
	return (i);
}
