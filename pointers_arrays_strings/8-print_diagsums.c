#include <stdio.h>
#include "main.h"
/**
*print_diagsums- Entry point
*@size: size of array
*@a: array param
*Description: prints the sum of two diagonals
*Return: void
*/
void print_diagsums(int *a, int size)
{
	int i, sum1, sum2;

	for (i = 0; i < size; i++)
	{
		sum1 = 0;
		sum1 = sum1 + a[(i * size) + i];
	}
	for (i = 1; i <= size; i++)
	{
		sum2 = 0;
		sum2 = sum2 + a[(i * size) - i];
}
printf("%d, %d\n", sum1, sum2);
}
