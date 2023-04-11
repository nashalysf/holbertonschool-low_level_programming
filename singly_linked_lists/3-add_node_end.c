#include "lists.h"
/**
 * add_node_end - add node at the end of list
 * @head: pointer to head node
 * @str: string to be copied/added
 * Return: address of new elmnt
 */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i = 0;
	list_t *end_node, *ptr;

	end_node = malloc(sizeof(list_t));
	if (end_node == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}
	end_node->len = i;
	end_node->str = strdup(str);

	if (*head == NULL)
	{
		end_node->next = *head;
		*head = end_node;
	}
	else
	{
		end_node->next = NULL;
		ptr = *head;
		while (ptr->next)
			ptr = ptr->next;
		ptr->next = end_node;
	}
	return (end_node);
}
