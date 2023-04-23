#include "lists.h"
/**
 * get_dnodeint_at_index- gets node index
 * @head: ptr to head node
 * @index: num to traverse
 * Return: ptr to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0, len = 0;
	dlistint_t *aux = head;

	if (head == NULL)
		return (NULL);

	while (aux)
	{
		len++;
		aux = aux->next;
	}
		if (!head)
			return (NULL);
		if (index > len)
			return (NULL);
		for (; i < index; i++)
			head = head->next;
	return (head);
}
