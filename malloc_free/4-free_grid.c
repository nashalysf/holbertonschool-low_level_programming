#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
*free_grid - entry point
*@grid: pointer param
*@height: var param
*Description: frees 2.d grid
*Return: free memory block
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
