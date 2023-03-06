#include "main.h"
/**
*reverse_array- Entry point
*@a: array param
*@n: size of array
*Description: reverses the content
*of and array
*Return: void
*/
void reverse_array(int *a, int n)
{
	int i = 0;
	int x;

	for (; i < n--; i++)
	{
		x = a[i];
		a[i] = a[n];
		a[n] = x;
	}
}
