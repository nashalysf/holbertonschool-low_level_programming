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
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp && size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	
	return (-1);
}
