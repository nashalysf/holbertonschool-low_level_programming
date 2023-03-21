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
	int i = 0;
	int *aptr;

	if (min > max)
		return (NULL);

	aptr = malloc(sizeof(int) * ((min - max) + 1));
	if (aptr == NULL)
		return (NULL);

	while (min <= max)
	{
		aptr[i] = min;
		i++;
		min++;
	}

	return (aptr);
}
