#include "main.h"
/**
*print_square- Entry point
*@size: input param
*Description: prints square
*Return: 0. (Success)
*/
void print_square(int size)
{
int x = 0;
int y = 0;

if (size > 0)
{
	for (; x < size; x++)
	{
		for (; y < size; y++)
		_putchar('#');

	_putchar('\n');

	}
}
_putchar('\n');
}

