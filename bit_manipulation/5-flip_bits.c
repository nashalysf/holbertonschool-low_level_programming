#include "main.h"
/**
 * flip_bits - returns bits needed to modify
 * one num to another
 * @n: number to be evaluated
 * @m: value to traverse
 * Return: value of the bit in index position
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{

	unsigned int bit = 0;

	while (n || m)
	{
		n >>= 1;
		m >>= 1;
		
		if ((n & 1) != (m & 1))
				bit++;
	}
	return (bit);
}
