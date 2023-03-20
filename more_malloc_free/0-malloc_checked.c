#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - entry point
 * @b: var to be allocated
 * Description: allocates memory
 * Return: pointer to mem
 */
void *malloc_checked(unsigned int b)
{
	int *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}
