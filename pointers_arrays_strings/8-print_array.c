#include "main.h"
#include <stdio.h>
/**
*print_array- Entry point
*@a: array param
*@n: size of array
*Description: prints each elemnt
*that the array holds
*Return: 0. (Success)
*/
void print_array(int *a, int n)
{
int *array = a;
int len = n;
int i = 0;

for (; i < len; i++)
{
	if (i == len)
		printf("%d", array[i]);
	else
	printf("%d, ", array[i]);
}
putchar('\n');
}
