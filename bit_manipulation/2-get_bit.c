#include "main.h"
/**
 * get_bit - returns value of given index
 * @n: number to be evaluated
 * @index: value to traverse
 * Return: value of the bit in index position
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int bit = 0;

	/* base case evaluates 63. which is the number of bits in an unsigned int */
	if (index >= 63)
		return (-1);
	bit = (n >> index) & 1;
	return (bit);
}
