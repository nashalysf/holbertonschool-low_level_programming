#include "hash_tables.h"
/**
 * hash_table_print - prints hash table
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *node = NULL;
	int aux = 1;

	if (!ht)
		return;
	printf("{");
	for (; i < ht->size; i++)
	{
		node = ht->array[i];
		while (node)
		{
			if (!aux)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			aux = 0;
			node = node->next;
		}
	}
	printf("}\n");
}
