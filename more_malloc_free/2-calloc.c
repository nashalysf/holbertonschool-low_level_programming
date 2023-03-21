#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * _calloc - entry point
 * @nmemb: num of elemnts (number memory block)
 * @size: bytes size
 * Description: allocate memory for an array
 * Return: pointer to mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	unsigned int len = nmemb * size;
	int *ptr;

	ptr = NULL;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(len);
	if (ptr == NULL)
		return (NULL);

	while (i < len)
	{
		ptr[i] = 0;
		i++;
	}

	return (ptr);
}
