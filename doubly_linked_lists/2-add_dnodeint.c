#include "lists.h"
/**
 * add_dnodeint - add node
 * @head: pointer to head node
 * @n: struct data
 * Return: address of new elmnt
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	ptr = malloc(sizeof(dlistint_t));

	if (ptr == NULL)
		return (NULL);

	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = *head;

	if (*head != NULL)
		(*head)->prev = ptr;

	*head = ptr;

	return (ptr);
}
