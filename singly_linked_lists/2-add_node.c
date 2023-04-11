#include "lists.h"
/**
 * add_node - add node
 * @head: pointer to head node
 * @str: string to be copied
 * Return: address of new elmnt
 */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *ptr;

	ptr = malloc(sizeof(list_t));
	if (ptr == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	ptr->len = i;
	ptr->str = ptr->str[i];
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
