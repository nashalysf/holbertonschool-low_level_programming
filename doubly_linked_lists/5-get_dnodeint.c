#include "lists.h"
/**
 * get_dnodeint_at_index- gets node index
 * @head: ptr to head node
 * @index: num to traverse
 * Return: ptr to node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (i == index)
			break;
		head = head->next;
		i++;
	}
	return (head);
}
