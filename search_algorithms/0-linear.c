#include "search_algos.h"
/**
 * linear_search - Searches for value in an array
 * @array: A pointer to firts element in array
 * @size: Size of array
 * @value: Value to search
 * Return: Index of the value in the array
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (!array || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
