#include "hash_tables.h"
/**
 * key_index - gives the index of key
 * @key: key value
 * @size: size of array
 * Return: index of key/value pair
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int i = 0;

	while (key)
	{

	if (key[i] == size)
		continue;
	i++;

	}
	return (i);
}
