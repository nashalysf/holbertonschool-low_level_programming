#include "main.h"
/**
*print_triangle- Entry point
*@size: size of triangle
*Description: prints triangle
*Return: 0. (Success)
*/
void print_triangle(int size)
{
	int x, y;
if (size > 0)
{
	for (x = 0; x < size; x++)
	{
		for (y = 0; y < size; y++)
		{
			if (y != 0)
				_putchar(' ');
			else
			_putchar('#');
	}
		_putchar('\n');
	}
	}
	else
	_putchar('\n');
}

