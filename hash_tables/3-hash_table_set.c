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
	hash_node_t *dup_n, *tmp_n;
	unsigned int i;

	if (!ht | !key | !value)
		return (0);
	else if (strlen(key) == 0)
		return (0);

	dup_k = strdup(key);
	dup_v = strdup(value);
	dup_n = malloc(sizeof(hash_node_t));
	if (!dup_n)
		return (0);

	i = hash_djb2((const unsigned char *)key) % (ht->size);
	dup_n->key = dup_k;
	dup_n->value = dup_v;
	dup_n->next = NULL;

	if ((ht->array)[i] != NULL)
	{
		tmp_n = (ht->array)[i];
		while (tmp_n)
		{
			if (strcmp(tmp_n->key, dup_k) == 0)
			{
				free(ht->array[i]->value);
				ht->array[i]->value = dup_v;
				free(dup_k);
				free(dup_n);
				return (1);
			}

			tmp_n = tmp_n->next;
		}
		tmp_n = (ht->array)[i];
		dup_n->next = tmp_n;
		(ht->array)[i] = dup_n;
	}
	else
		(ht->array)[i] = dup_n;

	return (1);
}
