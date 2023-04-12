#include "main.h"
/**
 * set_bit - sets value of given index to 1.
 * @n: pointer to number to be modified
 * @index: index of the bit to be set
 * Return: 1. for sucess -1. for error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int bit = 0;

	if (index >= 63)
		return (-1);
	bit = 1 << index;
	*n |= bit;
	return (1);
}
