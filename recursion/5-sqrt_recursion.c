#include "main.h"
/**
 * get_sqrt- Entry point
 * @n: current value param
 * @i: traverser param
 * Description: gets square root
 * Return: square root
 */
int get_sqrt(int n, int i)
{
if (n == (i * i))
	return (i);
else if (n > (i * i))
	return (get_sqrt(n, i + 1));
else
	return (-1);
}

/**
 * _sqrt_recursion- Entry point
 * @n: num param
 * Description: returns the natural square root
 * of n
 * Return: return new value
 */
int _sqrt_recursion(int n)
{
if (n < 0)
	return (-1);
if (n == 0)
	return (1);
else
	return (get_sqrt(n, 1));
}

