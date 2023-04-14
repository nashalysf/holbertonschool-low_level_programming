#include "hash_tables.h"
/**
 * hash_table_get - retrieves value from key
 * @ht: hash table to search
 * @key: key to value
 * Return: stored value
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *n;
	unsigned int i;

	if (!ht || !key)
		return (NULL);
	i = hash_djb2((unsigned char *)key) % (ht->size);
	n = ht->array[i];

	while (n)
	{
		if (!strcmp(key, n->key))
			return (n->value);
		n = n->next;
	}
	return (NULL);

}
