#include "main.h"
/**
*print_diagonal- Entry point
*@n: number of times char prints
*Description:
*Return: 0. (Success)
*/
void print_diagonal(int n)
{
	int x = 0;
	int y;

if (n > 0)
{
	for (; x < n; x++)
	{
	for (y = 0; y <= x; y++)
		if (y !=0)
		_putchar(' ');
_putchar('\\');
_putchar('\n');
	}
}
else
_putchar('\n');
}
