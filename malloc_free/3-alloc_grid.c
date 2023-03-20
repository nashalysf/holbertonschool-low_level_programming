#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * alloc_grid - entry point
 * @width: first dimension
 * @height: second dimension
 * Description: return a 2d array pointer
 * Return: a pointer to array
 */
int **alloc_grid(int width, int height)
{
	int i, x, **d2;

	if (width <= 0 || height <= 0)
		return (NULL);
	d2 = (int **)malloc(sizeof(int *) * height);
	if (d2 == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		d2[i] = (int *)malloc(sizeof(int *) * width);
		if (d2[i] == NULL)
			return (NULL);
	}
	for (i = 0; i < height; i++)
		for (x = 0; x < width; x++)
			d2[i][x] = 0;

	return (d2);
}
