#include "main.h"
/**
*print_square- Entry point
*@size: input param
*Description: prints square
*Return: 0. (Success)
*/
void print_square(int size)
{
int x, y;

if (size > 0)
{
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		_putchar('#');

	_putchar('\n');

	}
}
_putchar('\n');
}

