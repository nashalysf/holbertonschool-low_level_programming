#include "hash_tables.h"
/**
 * hash_table_set- adds elmnt to hash table
 * @ht: hash table to update
 * @key: key
 * @value: value of key
 * Return: 1. success 0. failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	char *dup_k, *dup_v;
	hash_node_t *dup_n;
	unsigned int i;

	dup_n = malloc(sizeof(hash_node_t));
	if (!dup_n)
		return (0);
	dup_k = strdup(key);
	dup_v = strdup(value);

	if (!ht | !key | !value)
		return (0);

	i = hash_djb2((unsigned char *)dup_k) % (ht->size);
	dup_n->key = dup_k;

	for (i = 0; value[i] != '\0'; i++)
	{
		dup_n->value[i] = dup_v[i];
	}

	dup_n->next = ht->array[i];
	ht->array[i] = dup_n;
	return (1);
}
