#include "main.h"
/**
 * _pow_recursion- Entry point
 * @x: value param
 * @y: rise power param
 * Description: returns value of x
 * raised by the power of y
 * Return: new value raised
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
	return (-1);
if (y == 0)
	return (1);
else
	return (x * _pow_recursion(x, y - 1));
}
