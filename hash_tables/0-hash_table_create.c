#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: size of array
 * Return: pointer to new table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table;
	unsigned int len = 0;

	if (size > 0)
	{
		new_table = malloc(sizeof(hash_table_t));
		if (!new_table)
			return (NULL);
		new_table->size = size;
		new_table->array = malloc(sizeof(char *) * size);
		if (!new_table->array)
		{
			free(new_table);
			return (NULL);
		}
		for (; len >= size; len++)
			new_table->array[len] = NULL;
	}

	return (new_table);
}
