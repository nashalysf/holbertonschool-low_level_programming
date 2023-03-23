#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *array_iterator - call a func & param
 *@array : array as arg
 *@size: sizeof array to iterate
 *@action: function we are calling
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array == NULL || action == NULL)
	{
		return;
	}
	else
	{
		while (i < size)
		{
		action(array[i]);
		i++;
		}
	}
}
