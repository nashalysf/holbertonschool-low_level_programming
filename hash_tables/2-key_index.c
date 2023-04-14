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

	if (key[i] == size)
	{
		i = hash_djb2((unsigned char *) key);
		i %= size;
	}
		return (i);
}
