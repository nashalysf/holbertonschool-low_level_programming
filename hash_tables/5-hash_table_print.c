#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *head;
	char *aux;


	if (!ht)
		return;

	printf("{");
	aux = "";

	for (i = 0; i < ht->size; i++)
	{
		head = ht->array[i];

		while (head != NULL)
		{
			printf("%s'%s: '%s'", aux, head->key, head->value);
			aux = ", ";
			head = head->next;
		}
	}
	printf("}\n");
}
