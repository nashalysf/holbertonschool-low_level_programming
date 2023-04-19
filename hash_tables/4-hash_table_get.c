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
	char *value;

	if (!ht || !key)
		return (NULL);
	else if (strlen(key) == 0)
		return (NULL);

	i = hash_djb2((unsigned char *)key) % (ht->size);
	if ((ht->array)[i] == NULL)
		return (NULL);

	n = ht->array[i];
	while (!value)
	{
		if (strcmp(n->key, key) == 0)
			value = n->value;
		n = n->next;
	}
	return (value);

}
