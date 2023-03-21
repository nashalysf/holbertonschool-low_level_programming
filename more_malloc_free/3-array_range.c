#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*array_range - entry point
*@min: min size
*@max: max size
*Description: creates an array of integers
*made of min param through max param
*Return: to pointer new array
*/
int *array_range(int min, int max)
{
	int i;
	int len = max - min;
	int *aptr;

	if (min > max)
		return (NULL);

	aptr = malloc((len + 1) * sizeof(int));

	if (aptr == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
		aptr[i] = min++;

	return (aptr);
}
