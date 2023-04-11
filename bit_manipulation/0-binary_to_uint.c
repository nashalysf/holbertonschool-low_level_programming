#include "main.h"
/**
 * binary_to_uint - converts binary to
 * unsigned int
 * @b: pointer to string(in binary)
 * Return: coverted number
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0;
	int check = 1;

	if (b == NULL)
		return (0);

	for (i = 0; b[i] != '\0'; i++)
		;

	for (i--; i >= 0; i--, check *= 2)
	{
		if (b[i] != '0' && b[i] != '1')
		       return (0);
		if (b[i] & 1)
			num += check;	
	}
	return (num);
}
