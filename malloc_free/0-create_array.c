#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - entry point
 * @c: array of chars
 * @size: the size of array
 * Description: creates an array of chars
 * initialized by a char
 * Return: pointer of array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *ar;

	ar = malloc(size * sizeof(char));
	if (c == '\0')
		return ('\0');
	if (size == 0)
		return ('\0');
	while (i < size)
	{
	ar[i] = c;
	i++;
	}
	return (ar);
}
